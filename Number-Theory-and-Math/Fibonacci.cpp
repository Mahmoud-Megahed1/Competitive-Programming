#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int g;
    cin >> g;
    int arr[g][g];
    for (int i = 0; i < g; i++) {
        for (int j = 0; j < g; j++) {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    int sum1=0;
    for (int i = 0; i < g; i++) {
        sum += arr[i][i]; 
        sum1 +=arr[i][g-i-1];
    }
    cout << abs(sum1-sum);
    return 0;
}
