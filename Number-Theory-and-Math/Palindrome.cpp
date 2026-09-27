// #include<iostream>
// using namespace std;
// int main(){
//     int n,rev=0,m;
//     cin>>n;
//     m=n;
//     while(n){
//     rev=rev*10+n%10;
//     n=n/10;
// }
// cout<<rev<<endl;
// if(m==rev)
// cout<<"YES";
// else
// cout<<"NO";
// return 0;

// }








// #include <iostream>
// #include <cmath>
// using namespace std;

// bool is_prime(int number) {
//     if (number <= 1) return false;
//     if (number <= 3) return true;

//     if (number % 2 == 0 || number % 3 == 0) return false;

//     for (int i = 5; i * i <= number; i += 6) {
//         if (number % i == 0 || number % (i + 2) == 0)
//             return false;
//     }
//     return true;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (is_prime(num)) {
//         cout << num << " is a prime number." << endl;
//     } else {
//         cout << num << " is not a prime number." << endl;
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;
// bool is_prime(int n) {
//     if (n <= 1) {
//         return false;
//     }

//     for (int i = 2; i*i <= n; ++i) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     int num;
//     cin >> num;

//     if (is_prime(num)) {
//         cout << "YES";
//     } else {
//         cout << "NO";
//     }

//     return 0;
// }



// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n, s;
//     cin >> n;
//     if (n <= 1) {
//         cout << "NO";
//     }
//     for(size_t s=2;s<=n;s++){
//         for (int i = 2; i<s ; i++) {
//             if (s % i == 0)
//                 continue;

//         }
//         if ((s % i != 0))
//         cout << s << endl;
      
//     }
//     }

//     #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     if (n <= 1) {
//         cout << "NO";
//     } else {
//         for (int s = 2; s <= n; s++) {
//             bool is_prime = true;
//             for (int i = 2; i <= sqrt(s); i++) {
//                 if (s % i == 0) {
//                     is_prime = false;
//                     break;
//                 }
//             }
//             if (is_prime) {
//                 cout << s << endl;
//             }
//         }
//     }
//     return 0;
// }

