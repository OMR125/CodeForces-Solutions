#include <iostream>
#include <algorithm>
 
using namespace std;
 
 
 
int main() {
    //cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n,ans;
        bool check = false;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        sort(arr,arr+n);
        if(arr[0]!=1) cout << "NO\n";
        else{
            ans = arr[0];
            for(int i=1;i<n;i++){
                if(ans < arr[i]){
                    cout << "NO\n";
                    check = true;
                    break;
                }
                ans += arr[i];
            }
            if(!check) cout << "YES\n";
        }
    }
}