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
#define prefix(arr,n) for(int i=1;i<=n;i++){arr[i]+=arr[i-1];}
 
 
int main() {
    OMR125
    ll n,k,l,r,q;cin >> n;
    ll a[n+1]={},b[n+1]={}; // 1 2 3 // 1 3 6
    for(int i=1,t;i<=n;i++) {
            cin >> t;
            a[i]=t;
            b[i]=t;
    }
    sort(b,b+n+1);
    prefix(a,n)
    prefix(b,n)
    cin >> q;
    while(q--) {
        cin >> k >> l >> r;
        if (k == 1) {
            cout << a[r]-a[l-1] << "\n";
        } else {
            cout << b[r]-b[l-1] << "\n";
        }
    }
}
 
 