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
int a(int b){
    return b*(b-1)/2;
}
 
 
int main() {
    OMR125
    ll t,n,k;cin >> t;
    while(t--) {
        cin >> n >> k;
        ll arr[n];
        fill_n(arr, n, 1);
        ll c = a(n),nones=0,ones=n;
        bool check = 1;
        for(int i=0;i<n;i++){
            if(k<c){
                ones--;
                nones++;
                arr[i]=-1;
                c=a(ones)+a(nones);
            }
            if(k==c)break;
            if(k>c||ones<=nones){
                check=0;
                break;
            }
        }
        if(check){
            cout << "YES\n";
            for(auto it:arr)cout << it << " ";
            cout << "\n";
        }else cout << "NO\n";
    }
}
 
 
 
 
 