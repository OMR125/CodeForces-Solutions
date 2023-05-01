#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <set>
 
typedef long long ll;
using namespace std;
 
bool check(vector<char>vect){
        bool k;
        for(int i=0;i<vect.size();i++){
            if(vect[i]=='A'&&vect[i+1]=='P'){k=1;break;}
            else k=0;
            }
        return k;
 
}
 
int main() {
     int t;
     cin >>t;
     while(t--){
        int n,ans=0;
        cin >> n;
        string s;
        cin >> s;
        vector<char> v(s.begin(), s.end());
        //if(!check(v))cout << 0;
        while(true){
            if(!check(v))break;
            ans++;
            for(int i=0;i<n;i++){
                if(v[i]=='A'&&v[i+1]=='P'){
                    v[i+1]='A';
                    i++;
                }
            }
        }
        cout << ans << "\n";
     }
}