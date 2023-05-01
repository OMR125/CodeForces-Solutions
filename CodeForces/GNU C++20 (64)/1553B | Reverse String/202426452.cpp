#include <iostream>
#include <algorithm>
#include <vector>
 
typedef long long ll;
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    while(t--){
        string a,b;
        bool ans = 0;
        cin >> a >> b; // abcdef // cdedcb // ab[cdedcb]a
        for(int i=0;i<a.length();i++){
            string s;
            for(int j=0;j<=i;j++)s+=a[j];
            for(int j=i-1;j>=0;j--)s+=a[j];
            bool check=1;
            if(s.find(b)!= string::npos){
                ans = 1;
                break;
            }
        }
        if(ans)cout << "YES\n";
        else cout << "NO\n";
    }
}