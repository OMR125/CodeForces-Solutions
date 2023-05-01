#include <iostream>
#include <stack>
#include <deque>
#include <set>
#include <vector>
 
 
typedef long long ll;
using namespace std;
#define OMR125 cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define pp pair<int,int>
#define out(flag) cout << (flag ? "YES" : "NO") << endl;
 
int main() {
    OMR125
    int t,k,n; cin >> t;
    while(t--){
        int cnt=0;
        cin >> n >> k;
        set<int,greater<int>>s;
        for(int i=0,a;i<n;i++){
            cin >> a;
            s.insert(a);
        }
        set<int>::iterator it=s.begin();
        while(s.end() != it){
            int itt = *it;
            if(itt-cnt*k<=0)break;
            else {
                cnt++;
                it++;
            }
        }
        cout << cnt << "\n";
    }
}
 