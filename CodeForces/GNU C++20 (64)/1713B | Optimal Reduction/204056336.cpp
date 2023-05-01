#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
struct default_map_val{long long i = -1;};
typedef long long ll;
using namespace std;
using namespace __gnu_pbds;
#define OMR125 cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define pp pair<ll,ll>
#define out(flag) cout << (flag ? "YES" : "NO") << endl;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define all(v) v.begin(),v.end()
#define prefix(arr,n) for(ll i=1;i<=n;i++){arr[i]+=arr[i-1];}
#define partial(arr,l,r,k) arr[l] += k; arr[r + 1] -= k;
const int mxN = 2e5;
bool sortbysec(pp a, pp b){return a.second<b.second;}
 
 
 
int main() {
    OMR125
    ll t,n;cin>>t;
    while(t--){
        cin >> n;
        ll arr[n];
        for(int i=0;i<n;i++)cin >> arr[i];
        ll i=0,j=n-1;
        while(i<n-1){
            if(arr[i]>arr[i+1])break;
            i++;
        }
        while(j>i){
            if(arr[j]>arr[j-1])break;
            j--;
        }
        if(j==i)cout << "YES\n";
        else cout << "NO\n";
 
 
    }
}
 