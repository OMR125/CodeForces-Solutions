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
    while (t--) {
        cin >> n >> k;
 
        ll a = n - 1;
        a = a * n;
        a = a / 2;
 
        ll cnt = 0;
 
        for (int i = 1; i <= n; i++) {
            int one = i;
            int minusOne = n - i;
 
            int mul1;
            int mn = one - 1;
            mn = mn * one;
            mn = mn / 2;
            mul1 = mn;
 
            int mul2;
            int mn2 = minusOne - 1;
            mn2 = mn2 * minusOne;
            mn2 = mn2 / 2;
            mul2 = mn2;
 
            int toPairs = mul1 + mul2;
 
            if (toPairs == k) {
                cout << "YES" << endl;
 
                for (int p = 1; p <= one; p++)
                    cout << "1 ";
 
                for (int p = 1; p <= minusOne; p++)
                    cout << "-1 ";
 
                cout << endl;
                cnt = 1;
                break;
            }
        }
 
        if (cnt == 0) {
            if (a == k) {
                cout << "YES" << endl;
 
                for (int i = 1; i <= n; i++)
                    cout << "1 ";
 
                cout << endl;
            } else
                cout << "NO" << endl;
        }
    }
 
}
 
 
 
 
 