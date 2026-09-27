    #include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 1) {
        cout << "NO";
    } else {
        for (int s = 2; s <= n; s++) {
            bool is_prime = true;
            for (int i = 2; i <= sqrt(s); i++) {
                if (s % i == 0) {
                    is_prime = false;
                    break;
                }
            }
            if (is_prime) {
                cout << s << endl;
            }
        }
    }
    return 0;
}