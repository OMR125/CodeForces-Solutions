#include <iostream>
#include <set>
#include <queue>
#include <algorithm>
#include <map>
 
 
 
using namespace std;
 
 
int main()
{   cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    int n;
    map<int,int>m1,m2;
    set<int>total;
    cin >> n;
    int k=n;
    while(n--){
        int a,b;
        cin >> a >> b;
        m1[a]++;
        if(a!=b)m2[b]++;
        total.insert(a);
        total.insert(b);
    }
    int target = (k+1)/2;
    for(auto it:m1){
        if(it.second >= target){
            cout << 0;
            return 0;
        }
    }
    priority_queue<int,vector<int>,greater<int>>ans;
    for(auto it:total){
        int f1 = m1[it];
        int f2 = m2[it];
        int want = target - f1;
        if(f2>=want) ans.push(want);
 
    }
    if(ans.empty())cout << -1;
    else cout << ans.top();
 
 
    return 0;
}
 
 