#include <iostream>
 
 
using namespace std;
 
 
int main()
{   cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    long long t,n,k,a,b;
    cin >> t;
    while(t--){
    cin >> n >> k >> a >> b;
    long long s=0,p=1,ans=0;
    for(long long i =0;i<n;i++){
        long long t;
        cin >> t;
        if(s==0 || p<=t){
            ans++;
            s=k-1;
            p=t+b+a+1;
        }
        else s--;
    }
    cout << ans << "\n";
    }
    return 0;
}
 
 