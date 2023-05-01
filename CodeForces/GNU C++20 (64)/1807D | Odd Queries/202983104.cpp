#include <iostream>
#include <vector>
#include <algorithm>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
typedef long long ll;
using namespace std;
using namespace __gnu_pbds;
#define OMR125 cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define pp pair<int,int>
#define out(flag) cout << (flag ? "YES" : "NO") << endl;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define all(v) v.begin(),v.end()
#define prefix(arr,n) for(int i=1;i<=n;i++){cin >>arr[i];arr[i]+=arr[i-1];}
 
 
 
int main() {
    int t,n,q,l,r,k;
    cin>>t;
    while(t--){
        cin >> n >> q;
        int arr[n+1]={};
        prefix(arr,n);
        while(q--){ // 2 4 5 8 10 // 2 2 1 3 2 // 2,3 3
            cin >> l >> r >> k;
            int add = (r-l+1)*k; // 6
            int sub = arr[r]-arr[l-1]; //
            int total = arr[n]+add-sub;
            if(total&1)cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
 
 