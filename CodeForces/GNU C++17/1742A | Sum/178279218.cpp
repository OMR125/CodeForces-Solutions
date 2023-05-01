#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    int x,y,z;
    for(int i=0;i<t;i++){
        cin >> x >> y >> z;
    if(x+y==z|| y+z==x|| z+x==y)
        cout << "YES" << endl;
    else
    cout << "NO" << endl;
 
    }
    return 0;
}