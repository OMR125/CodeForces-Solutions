#include <iostream>
 
using namespace std;
 
int main()
{
    int n,a,b,cap=0,now=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        now =now - a;
        now =now + b;
        cap=max(cap,now);
    }
    cout << cap;
    return 0;
}