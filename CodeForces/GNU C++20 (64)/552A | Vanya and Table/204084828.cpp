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
 
int arr[101][101];
int main() {
    OMR125
    ll t,n;cin>>t;
    while(t--){
        int left1,left2,right1,right2;
        cin >> left1 >> right1 >> left2 >> right2;
        for(int i=left1;i<=left2;i++){
            for(int j=right1;j<=right2;j++){
                arr[i][j]++;
            }
        }
    }
        int sum=0;
        for(int i=1;i<=100;i++){
            for(int j=1;j<=100;j++){
                sum+=arr[i][j];
            }
        }
        cout << sum;
}
 