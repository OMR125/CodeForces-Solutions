#include <iostream>
#include <stack>
#include <queue>
#include <set>
#include <vector>
#include <algorithm>
 
 
typedef long long ll;
using namespace std;
#define OMR125 cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define pp pair<int,int>
 
int main(){
    OMR125
    int t,n;cin>>t;
    while(t--){
       
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        int start=0,end= n - 1;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                start=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]!=b[i]){
                end=i;
                break;
            }
        }
        for(int i=end; i < n - 1; i++){
            if(b[i]<=b[i+1])end++;
            else break;
        }
 
        for(int i=start; i > 0; i--){
            if(b[i]>=b[i-1])start--;
            else break;
        }
 
        cout << start + 1 << " " << end + 1 << "\n";
 
 
    }
    return 0;
}