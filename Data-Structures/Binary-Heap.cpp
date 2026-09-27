#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    // this line full  the tree to be max heap from non leaf nodes to top or root من تحت لفوق لفوق

    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    vector<int> arr = {4, 10, 3, 5, 1};
    heapSort(arr);

    for (int num : arr)
        cout << num << " ";
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll ; 
const int MOD = 1e9 + 7 ;
#define RG std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
ll mod_pow(ll  base, ll  exp, int mod) {
    ll  res = 1 , x  = base % mod;
    while (exp > 0) {
        if (exp & 1) res = (res * x) % mod;
        x = (x * x) % mod;
        exp >>= 1; 
    }
    return res;
}
int main() {
    RG ; 
    int n; 
    cin >> n;
    ll  total = mod_pow(3, 3LL * n, MOD) ,eq6 = mod_pow(7, n, MOD) ;
    ll  ans = total - eq6;
    if (ans < 0) ans += MOD; 
    cout << ans << endl;
    return 0;
}
