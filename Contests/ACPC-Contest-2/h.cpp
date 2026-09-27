#include<bits/stdc++.h>
using namespace std;
void fast(){ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);}

int main(){
    int a[9], b[8];
    int s1 = 0, s2 = 0;
    for(int i = 0 ; i < 9 ; i++){
        cin >> a[i] ;
        s1 += a[i];
    }
    for(int i = 0 ; i < 8 ; i++){
        cin >> b[i];
        s2 += b[i];
    }
    cout << s1-s2+1 ;
}