#include <iostream>
#include <stack>
#include <deque>
#include <vector>
 
 
typedef long long ll;
using namespace std;
#define OMR125 cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define pp pair<int,int>
#define out(flag) cout << (flag ? "YES" : "NO") << endl;
 
int main() {
    OMR125
    int t,k,n; cin >> t;
    while(t--){
        cin >> n >> k;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
         for(int i=0;k>0;k--){
             if(i==n-1)break;
             if(arr[i]>0){
                 arr[i]--;
                 arr[n-1]++;
             }else{
                 i++;
                 k++;
             }
        }
        for(int i=0;i<n;i++)cout << arr[i] << " ";
        cout << endl;
    }
}
 