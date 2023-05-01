#include <iostream>
using namespace std;
 
int main()
{
    int a,b,c,n,x(0);
    cin >> n;
    for(int i = n ; i>0; i--){
        cin >> a >> b >> c ;
        if(a+b+c >=2){
             x += 1;
        }
    }
    cout << x << endl;
 
 
    return 0;
 
}