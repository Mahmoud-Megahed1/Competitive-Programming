#include <bits\stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ; 
int main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        set<int> s(a.begin(), a.end());
        int npairs = n / 2;
        for (int i = 0; i < n && npairs > 0; ++i) {
            for (int j = i + 1; j < n && npairs > 0; ++j) {
                if (s.find(a[j] % a[i]) == s.end()) {
                    cout << a[j] << " " << a[i] << "\n";
                    npairs--;
                }
            }
        }
    }
    return 0;
}