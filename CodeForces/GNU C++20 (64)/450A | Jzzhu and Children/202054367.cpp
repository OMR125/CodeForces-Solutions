#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
 
typedef long long ll;
using namespace std;
 
 
int main() {
     int n,m;
     queue<pair<int,int>>q;
     cin >> n >> m;
     for(int i=1,a;i<=n;i++){
        cin >> a;
        q.push(make_pair(a,i));
     }
     while(q.size()!=1){
            int a = q.front().first;
        if(a-m>0){
                q.push(make_pair(a-m,q.front().second));
                q.pop();
        }
        else q.pop();
     }
     cout << q.front().second;
}