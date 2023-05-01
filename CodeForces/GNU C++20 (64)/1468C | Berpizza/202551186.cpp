#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;
typedef long long ll;
#define OMR125 cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define pp pair<int,int>
 
int main() {
    OMR125
    ll t,a,b,i=1;
    set<pp>s1;
    set<pp>s2;
    cin >> t;
    while(t--){
        cin >> a;
        if(a==1) {
            cin >> b;
            s1.insert(make_pair(i,b));
            s2.insert(make_pair(-b,i));
            i++;
        }
       else if (a==2){
            pair it = *s1.begin();
            cout << it.first << " ";
            s1.erase(it);
            s2.erase({-it.second,it.first});
        }
        else{
            pair it = *s2.begin();
            cout << it.second << " ";
            s2.erase(it);
            s1.erase({it.second,-it.first});
        }
    }
}