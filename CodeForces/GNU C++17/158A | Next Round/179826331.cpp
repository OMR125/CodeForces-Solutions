#include <iostream>
 
using namespace std;
 
int main()
{   int n,k;
    int cnt=0;
    cin >> n >> k;
    int a[100];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int j=0;j<n;j++){
        if(a[j]>=a[k-1]&& a[j]!=0){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}