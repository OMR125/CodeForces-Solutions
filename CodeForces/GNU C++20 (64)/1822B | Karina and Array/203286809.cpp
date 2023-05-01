#include <iostream>
#include <vector>
#include <stack>
#include <queue>
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
    int t,k,n,a;cin>>t;
    while(t--){
        cin >> n;
        vector<ll>vp,vn;
        for(int i=0;i<n;i++){
            cin >> a;
            if(a>0)vp.push_back(a);
            else vn.push_back(a);
        }
        if(!vp.empty())sort(all(vp),greater<ll>());
        if(!vn.empty())sort(all(vn));
        if(vp.size()==1&&vn.size()==1)cout << vp[0]*vn[0] << "\n";
        else if(vp.size()==1&&vn.size()>1)cout<<vn[0]*vn[1]<<"\n";
        else if(vn.size()==1&&vp.size()>1)cout <<vp[0]*vp[1]<<"\n";
        else if(vp.empty()) cout << vn[0]*vn[1] << "\n";
        else if(vn.empty())cout << vp[0]*vp[1] << "\n";
        else cout << max(vp[1]*vp[0],vn[0]*vn[1]) << "\n";
 
 
    }
    }
 