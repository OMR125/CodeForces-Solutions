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
// 2dvec vector<vector<ll>>v(n,vector<ll>(m,0));
 
const int mxN = 2e5;
bool sortbysec(pp a, pp b){return a.second<b.second;}
 
int main() {
    OMR125
    ll t,n,k;cin>>t;
    while(t--){
        cin >> n >> k;
        vector<vector<ll>>arr(n,vector<ll>(k,0));
        ll sum=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<k;j++)
                    cin >> arr[i][j];
            }
                for(int i=0;i<k;i++){
                ll temp[n];
                for(int j=0;j<n;j++)temp[j]=arr[j][i];
                sort(temp,temp+n,greater<int>());
                for(int j=0;j<n;j++){
                    sum+=(n-j-1)*temp[j];
                    sum-=j*temp[j];
                }
            }
            cout << sum << "\n";
 
        }
 
}
 