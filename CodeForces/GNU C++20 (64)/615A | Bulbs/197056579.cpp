#include <iostream>
#include <set>
#include <algorithm>
 
 
 
using namespace std;
 
 
int main()
{   cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    int n,m;
    set<int>s;
    cin >> n >> m;
    while(n--){
        int a;
        cin >> a;
        for(int i=0;i<a;i++){
            int k;
            cin >> k;
            s.insert(k);
        }
    }
    if(s.size()==m)cout << "YES";
    else cout << "NO";
    return 0;
}
 
 