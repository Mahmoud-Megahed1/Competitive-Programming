#include<bits/stdc++.h>
using namespace std;
void fast(){ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);}

int main(){
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for(int i = 0 ; i < t.size() ;i++){
        if(t[i] == s[cnt]){
            cout << i+1 << " ";
            cnt++;
        }
    }
}