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
    ll t,n,a;cin >> t >> n;
    vector<int>arr(t);
    for(int i=0;i<t;i++)cin >> arr[i];
    sort(all(arr));
    while(n--){
        cin >> a;
        cout << upper_bound(all(arr),a)-arr.begin() << " ";
    }
}
 
 