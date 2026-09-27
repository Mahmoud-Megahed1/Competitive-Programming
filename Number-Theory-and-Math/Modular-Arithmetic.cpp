/**
 * @file Modular-Arithmetic.cpp
 * @author Mahmoud Mohamed Megahed (Codeforces: mahmoud_megahed)
 * @brief Essential Modular Arithmetic & Combinatorics algorithms for Competitive Programming.
 * 
 * Includes:
 * 1. Fast Power (Binary Exponentiation) O(log b)
 * 2. Extended Euclidean Algorithm & GCD O(log(min(a, b)))
 * 3. Modular Multiplicative Inverse (Fermat's Little Theorem for prime mod, Extended GCD for coprime)
 * 4. Modular Add, Subtract, Multiply, and Divide
 * 5. Combinatorics: Precomputed Factorials and Inverse Factorials for O(1) nCr % MOD queries.
 */

#include <iostream>
#include <vector>

using namespace std;

static const int MOD = 1e9 + 7;
static const int MAXN = 1e6 + 5;

// Modular Addition
long long add(long long a, long long b, long long m = MOD) {
    return ((a % m) + (b % m) + m) % m;
}

// Modular Subtraction
long long sub(long long a, long long b, long long m = MOD) {
    return ((a % m) - (b % m) + m) % m;
}

// Modular Multiplication
long long mul(long long a, long long b, long long m = MOD) {
    return ((a % m) * (b % m)) % m;
}

// Binary Exponentiation: (base^exp) % m in O(log exp)
long long power(long long base, long long exp, long long m = MOD) {
    long long res = 1;
    base %= m;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % m;
        base = (base * base) % m;
        exp >>= 1;
    }
    return res;
}

// Extended Euclidean Algorithm: finds x, y such that ax + by = gcd(a, b)
long long extgcd(long long a, long long b, long long &x, long long &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    long long x1, y1;
    long long g = extgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return g;
}

// Modular Inverse using Fermat's Little Theorem (requires m to be prime)
long long modInverseFermat(long long n, long long m = MOD) {
    return power(n, m - 2, m);
}

// Modular Inverse using Extended Euclidean (valid for any coprime a and m)
long long modInverseCoprime(long long a, long long m = MOD) {
    long long x, y;
    long long g = extgcd(a, m, x, y);
    if (g != 1) return -1; // Inverse does not exist
    return (x % m + m) % m;
}

// Modular Division: (a / b) % m
long long divide(long long a, long long b, long long m = MOD) {
    return mul(a, modInverseFermat(b, m), m);
}

// --- Fast Combinatorics (nCr % MOD) ---
long long fact[MAXN];
long long invFact[MAXN];

void precomputeCombinatorics(int n, long long m = MOD) {
    fact[0] = 1;
    invFact[0] = 1;
    for (int i = 1; i <= n; ++i) {
        fact[i] = mul(fact[i - 1], i, m);
    }
    invFact[n] = modInverseFermat(fact[n], m);
    for (int i = n - 1; i >= 1; --i) {
        invFact[i] = mul(invFact[i + 1], i + 1, m);
    }
}

long long nCr(int n, int r, long long m = MOD) {
    if (r < 0 || r > n) return 0;
    return mul(fact[n], mul(invFact[r], invFact[n - r], m), m);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precomputeCombinatorics(1000000);

    long long n = 10, r = 3;
    cout << "C(" << n << ", " << r << ") % MOD = " << nCr(n, r) << "\n";

    long long a = 25, b = 5;
    cout << "(" << a << " / " << b << ") % MOD = " << divide(a, b) << "\n";

    return 0;
}
