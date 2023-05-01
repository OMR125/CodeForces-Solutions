#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    int cnt = 0;
    cin >>n;
    int x[n][2];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> x[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(x[i][0]==x[j][1]){
                cnt++;
 
            }
        }
    }
    cout << cnt;
 
    return 0;
}