#include <iostream>
#include <vector>
#include <deque>
 
 
typedef long long ll;
using namespace std;
#define OMR125 cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define pp pair<int,int>
 
 
int main() {
    OMR125;
    int t,n,a; cin >> t;
    while(t--){
        cin >> n;
        vector<int>v;
        int cnt=0;
        for(int i=0;i<n;i++){
            cin >> a;
            v.push_back(a);
        }
        for(int i=0;i<n-1;i++){
            int mx = max(v[i],v[i+1]);
            int mn = min(v[i],v[i+1]);
            if(mx>2*mn){
                while(2*mn<mx){
                    mn*=2;
                    cnt++;
                }
            }
               }
        cout << cnt << "\n";
        }
 
 
}
 