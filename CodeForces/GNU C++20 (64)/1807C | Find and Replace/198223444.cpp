#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
 
 
 
int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        map <char,int>m1,m2;
        int l;
        string s,s1="",s2="";
        bool turn = false,check1=true,check2=true;
        cin >> l >> s;
        for(int i=0;i<l;i++){ // s1 1011101 s2 0100010 ------- 0101010
            if(!m1.count(s[i])) {
                if(turn) {
                    m1[s[i]] = 0;
                    m2[s[i]] = 1;
                    turn = false;
                }
                else{
                    m1[s[i]] = 1;
                    m2[s[i]] = 0;
                    turn = true;
                }
            }
            else{
                if(turn) turn = false;
                else turn = true;
            }
            s1 = s1 + to_string(m1[s[i]]);
            s2 = s2 + to_string(m2[s[i]]);
        }
        for(int i=0;i<l;i++) {
            if (s1[i] == s1[i + 1]) {
                check1 = false;
            }
            if (s2[i] != s2[i + 1]) {
                check2 = false;
            }
            if (!check1 && !check2) break;
        }
        if(check1 || check2) cout << "YES\n";
        else cout << "NO\n";
    }
}