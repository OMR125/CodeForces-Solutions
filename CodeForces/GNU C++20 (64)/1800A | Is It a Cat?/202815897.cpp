#include <iostream>
#include <stack>
#include <queue>
#include <set>
#include <vector>
 
 
typedef long long ll;
using namespace std;
#define OMR125 cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define pp pair<int,int>
#define out(flag) cout << (flag ? "YES" : "NO") << endl;
 
int main() {
    OMR125
    int t,n;cin >> t;
    string s;
    while(t--){
        string ans="",k="";
        cin >> n >> s;
        for(int i=0;i<n;i++){
            k+=tolower(s[i]);
        }
        queue<char>st;
        st.push(k[0]);
        ans+=k[0];
        for(int i=1;i<n;i++){
            if(k[i]!=st.front()){
                st.pop();
                st.push(k[i]);
                ans+=k[i];
            }
        }
        if(ans=="meow")cout << "YES\n";
        else cout << "NO\n";
 
    }
;
}
 