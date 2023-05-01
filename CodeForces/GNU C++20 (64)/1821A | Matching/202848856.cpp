#include <iostream>
#include <stack>
#include <queue>
#include <set>
#include <vector>
#include <algorithm>
 
 
typedef long long ll;
using namespace std;
#define OMR125 cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define pp pair<int,int>
#define out(flag) cout << (flag ? "YES" : "NO") << endl;
 
int main() {
    OMR125
    int t;
    cin >> t;
    string a;
    while (t--) {
        cin >> a;
        if (a=="0") cout << 0 << "\n";
        else {
            int ans = 1;
            for (int i = 0; i < a.length(); i++) {
                if(a[0]=='0'){
                    ans=0;
                    break;
                }
                if (i == 0 && a[i] == '?')ans *= 9;
                else if (a[i] == '?')ans *= 10;
            }
            cout << ans << "\n";
        }
    }
}
 
 
 