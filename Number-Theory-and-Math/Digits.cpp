// #include<iostream>
// using namespace std ;
// int main (){
//     int n ;
//     cin>>n;
//     while (n){
//         string m ;
//         cin>>m;
//         for(int i=m.size()-1;i>=0;i--){
//             cout<<(m[i]+2)%10<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
//     }


#include<iostream>
using namespace std ;
int main (){
    int n ;
    cin>>n;
    while (n--){
        int m ;
        cin>>m;
        if (m==0){
            cout<<0 ;
        }
        else {
        while(m>0){
            cout<<m%10<<" ";
            m/=10;
        }}
        cout<<endl;
    }
    return 0;
    }
 
 