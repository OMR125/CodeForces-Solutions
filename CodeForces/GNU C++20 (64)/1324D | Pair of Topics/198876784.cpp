#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
typedef long long ll;
#define mk(arr,n,type)  type *arr=new type[n];
 
int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    int n;
    cin >> n;
    mk(a,n,int);
    mk(b,n,int);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    mk(c,n,int);
    for(int i=0;i<n;++i){
        c[i]=b[i]-a[i];
    }
    long long ans=0;
    sort(c,c+n);
  for(int i=0;i<n;i++){
    auto it = lower_bound(c+i+1,c+n,-c[i]);
    int j = it -c;
    ans += j-(i+1);
  }
  cout << ans << "\n";
  return 0;
 
}
 
 