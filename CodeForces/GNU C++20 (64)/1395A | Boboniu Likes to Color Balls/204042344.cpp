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
    int t;cin >> t;
    ll r,g,b,w;
    while(t--){
        cin >> r >> g >> b >> w;
        int cntodd=0,can=1;
        if(r==0||g==0||b==0)can=0;
        if(r%2)cntodd++;
        if(g%2)cntodd++;
        if(b%2)cntodd++;
        if(w%2)cntodd++;
        if((cntodd==3&&!can)||cntodd==2)cout << "NO\n";
        else cout << "YES\n";
    }
 
}
 