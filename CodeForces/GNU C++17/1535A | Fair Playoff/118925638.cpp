#include <iostream>
 
using namespace std;
 
int main()
{int n,a,b,c,d;
cin >> n;
for(int i=0;i<n;i++){
    cin >> a >> b >> c >> d;
    if(a>b && b>c && b>d){
        cout << "NO" << endl;
    } else if(b>a && a>c && a>d){
    cout << "NO" << endl;}
    else if(c>d&&d>a&&d>b){cout << "NO" << endl;}
    else if(d>c&&c>a&&c>b){cout << "NO" << endl;}
    else{cout << "YES" << endl;}
}
    return 0;
}