
// #include <iostream>
// using namespace std;

// int main() {
//     int n, arr[n];
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int sum = 0;
//     for (int j = 0; j < n; j++) {
//         sum += arr[j];
//     }
//     cout << abs(sum ;
//     return 0;
// }

// ______________________________________________________________________

// #include <iostream>
// using namespace std;

// int main() {
//     int n, arr[n];
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int m;
//     cin >> m;
//     bool found = false; 
//     for (int j = 0; j < n; j++) {
//         if (m == arr[j]) {
//             cout << j ;
//             found = true;
//             break;
//         }
//     }
//     if (!found) {
//         cout << -1;
//     }
//     return 0;
// }

// _________________________________________________________________________________________

// #include <iostream>
// using namespace std;

// int main() {
//     int n, arr[n];
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//   for (int j=0 ;j<n ;j++){
//     if (arr[j] < 0)
//     arr[j]=2;
//     else if (arr[j]>0)
//     arr[j]=0;
//     else
//     arr[j]=1;
//   }
//   for(int m=0;m<n;m++){
//     cout<<arr[m]<<" ";
//   }
// }

// _______________________________________________________________________

// #include <iostream>
// using namespace std;

// int main() {
//     int n, arr[n];
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//   for (int j=0 ;j<n ;j++){
//     if (arr[j]<=10){
//     cout<<"A["<<j<<"] = "<<arr[j]<<endl;
//     }else{
//     continue;
//       }}
// return 0;
// }

// ________________________________________________________________

// #include <iostream>
// using namespace std;

// int main() {
//     int n, arr[n];
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int m=arr[0],u;
//   for (int j=0 ;j<n ;j++){
//      if (m>arr[j])
//      m=arr[j];
//      u=j-1;
// }
// cout<<m<<" "<<u;
// return 0;
// }


// ______________________________________________________

// #include <iostream>
// using namespace std;

// int main() {
//     int n, arr[n];
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//   for (int j=0 ;j<n ;j++){
//     cout<<arr[n-j-1]<<" ";
//   }
//   return 0;
// }



// _________________________________________________________

// #include <iostream>
// using namespace std;

// int main() {
//     int n, arr[n];
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     bool s = true;
//     for (int j = 0; j < n / 2; j++) {
//         if (arr[j] != arr[n - j - 1]) {
//             s = false;
//             break;
//         }
//     }
//     if (s) {
//         cout << "YES"; 
//     } else {
//         cout << "NO"; 
//     }
//     return 0;
// }



// ___________________sort___________________

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int t = 0;
    for (size_t j = 0; j < n; j++) {
        for (int b = 0; b < n - 1; b++) {
            if (arr[b] > arr[b + 1]) {
                t = arr[b];
                arr[b] = arr[b + 1];
                arr[b + 1] = t;
            }
        }
    }
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    return 0;
}
//  ______________________________________________________

// #include <iostream>
// using namespace std;

// int main() {
//     int T; 
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;
//         int A[N];
//         for (int i = 0; i < N; i++) {
//             cin >> A[i];
//         }
//         int min_result = 1e9; 
//         for (int i = 0; i < N; i++) {
//             for (int j = i + 1; j < N; j++) {
//                 int result = A[i] + A[j] + j - i;
//                 min_result = min(min_result, result);
//             }
//         }
//         cout << min_result << endl;
//     }

//     return 0;
// }

// _____________________________________________________


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int A, B;
//     cin >> A >> B;
//     bool p = true;
//     string value;
//     cin >> value;

//     if (value[A] != '-') {
//         p = false;
//     } else {
//         for (int i = 0; i < A + B + 1; i++) {
//             if (i != A) {
//                 if (value[i] < '0' || value[i] > '9') {
//                     p = false;
//                     break;
//                 }
//             }
//         }
//     }

//     if (p) {
//         cout << "Yes";
//     } else {
//         cout << "No";
//     }

//     return 0;
// }
