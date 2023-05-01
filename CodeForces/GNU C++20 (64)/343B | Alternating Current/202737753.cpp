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
    string s;cin >> s;
    char jc,ic;
    vector<char>v;
    int n = s.length();
    int check = 0;
    if(n&1)check=0;
    else {
        for (int i = 0; i < n; i += 2) {
            if (s[i] != s[i + 1]) {
                v.push_back(s[i]);
                v.push_back(s[i + 1]);
            }
        }
        if (v.empty())check = 1;
        else {
            ic = v[0];
            jc = v[1];
            int cnt = 1;
            for (int i = 2; i < v.size(); i += 2) {
                if (v[i] == jc && v[i + 1] == ic) {
                    cnt--;
                } else cnt++;
            }
            if (cnt == 0)check = 1;
            else check = 0;
        }
    }
    out(check);
}
 