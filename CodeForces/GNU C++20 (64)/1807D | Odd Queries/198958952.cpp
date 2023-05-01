#include <iostream>
#include <algorithm>
 
 
using namespace std;
typedef long long ll;
 
void solve(){
    int n,m;
    cin >> n >> m;
    ll a[n+1]={};
    for(int i=1;i<=n;i++){
        cin >> a[i];
        a[i]+=a[i-1];
    } // make prefix array a = 2,4,5,8,10
    while(m--) {
        ll l, r, q;
        cin >> l >> r >> q;
        ll total = a[n],add= (r - l + 1) * q , re= a[r]-a[l-1]; // 10+8-(3)
        if ((total+add-re)&1)cout << "YES\n";
        else cout << "NO\n";
    }
}
 
int main() {cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
   int t;
   cin >>t;
   while(t--){
       solve();
   }
    return 0;
}