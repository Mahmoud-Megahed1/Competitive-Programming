#include<bits/stdc++.h>
using namespace std;
void fast(){ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);}

int main(){
    int n;
    cin >> n;
    char a[n][n], b[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> b[i][j];
            if(a[i][j] != b[i][j]){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }

}