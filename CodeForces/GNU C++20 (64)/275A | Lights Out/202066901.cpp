#include <iostream>
#include <vector>
using namespace std;
     int arr[5][5];
 
int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
     for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cin >> arr[i][j];
        }
     }
     for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if((arr[i][j]+arr[i+1][j]+arr[i-1][j]+arr[i][j+1]+arr[i][j-1])%2==0){
                cout << '1';
            }
            else cout << '0';
        }
        cout << "\n";
     }
    return 0;
}