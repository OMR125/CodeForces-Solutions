#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{   cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    int n,t;
    cin >> n >> t;
    vector<pair<int,int>>d;
    for(int i=0;i<t;i++){
           int a,b;
           cin >> a >> b;
           d.push_back(make_pair(a,b));
    }
    sort(d.begin(),d.end());
    bool win = 1;
    for(int i=0;i<t;i++){
           if(n>d[i].first){
            n += d[i].second;
           }else{
           win = 0;
           break;
           }
    }
    if(win)cout << "YES";
    else cout << "NO";
    return 0;
}