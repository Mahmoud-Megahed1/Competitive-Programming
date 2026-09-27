#include <bits/stdc++.h>
using namespace std;
#define RG                   \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(v) ((int)(v).size())
#define clr(v, d) memset(v, d, sizeof(v))
#define rep(i, v) for (int i = 0; i < sz(v); ++i)
#define lp(i, n) for (int i = 0; i < (int)(n); ++i)
#define lpi(i, j, n) for (int i = (j); i < (int)(n); ++i)
#define lpd(i, j, n) for (int i = (j); i >= (int)(n); --i)
#define isOn(S, j) ((S) & (1 << (j)))        // Check if bit j is on
#define setBit(S, j) ((S) | (1 << (j)))      // Turn on bit j
#define clearBit(S, j) ((S) & ~(1 << (j)))   // Turn off bit j
#define toggleBit(S, j) ((S) ^ (1 << (j)))   // Toggle bit j
#define lowBit(S) ((S) & -(S))               // Get lowest set bit
#define countBits(S) (__builtin_popcount(S)) // Count number of 1s
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef priority_queue<int> pqi;                                // Max heap
typedef priority_queue<int, vector<int>, greater<int>> pqi_min; // Min heap
const int OO = (int)1e9;
const ll INF = 1e18;
const double EPS = 1e-7;
const int MOD = (int)1e9 + 7;
#ifdef DEBUG
#define debug(x) cerr << #x << " = " << (x) << endl;
#else
#define debug(x)
#endif
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
ll modExp(ll base, ll exp, ll mod = MOD)
{
    ll result = 1;
    base %= mod;
    while (exp > 0)
    {
        if (exp & 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}
template <typename T>
void printVector(const vector<T> &vec)
{
    for (auto &el : vec)
        cout << el << " ";
    cout << endl;
}
template <typename T, typename U>
ostream &operator<<(ostream &os, const pair<T, U> &p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}
