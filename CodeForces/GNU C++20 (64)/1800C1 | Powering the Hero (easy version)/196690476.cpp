#include <iostream>
#include <set>
#include <queue>
 
using namespace std;
 
 
int main()
{   cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    int n;
    cin >> n;
    while(n--){
        long long t;
        cin >> t;
        priority_queue <int>s;
        long long ans =0;
        while(t--){
            int k;
            cin >> k;
            if(k!=0) s.push(k);
            else if(!k && !s.empty()){
            ans += abs(s.top());
            s.pop();
            }
        }
        cout << ans << "\n";
    }
    return 0;
}