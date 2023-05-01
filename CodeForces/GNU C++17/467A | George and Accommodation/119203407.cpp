#include <iostream>
 
using namespace std;
 
int main()
{
    int n,a,b,cnt=0;
    cin >> n;
    for(int i=0;i<n;i++){
       for(int j=0;j<1;j++){
        cin >> a >> b;
        if(b-a!=0&&b-a>=2){
            cnt++;
        }
 
       }
 
    }
    cout << cnt;
    return 0;
}