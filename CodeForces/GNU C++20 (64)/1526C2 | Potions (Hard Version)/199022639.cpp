#include <iostream>
#include <queue>
using namespace std;
typedef long long ll;
 
int main()
{   cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    ll n,sum=0;
    priority_queue<ll,vector<ll>,greater<ll>>q;
    cin >> n;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        sum+=k;
        q.push(k);
        while(sum<0){
            sum-=q.top();
            q.pop();
        }
    }
    cout << q.size();
}