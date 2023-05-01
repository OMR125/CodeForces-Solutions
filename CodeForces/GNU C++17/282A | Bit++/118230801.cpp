#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
int x = 0;
int n;
string a;
string xp= "++X";
string xpp= "X++";
string xm= "--X";
string xmm= "X--";
cin >>n;
for(int i = 0 ; i<n ; i++){
    cin >> a;
    if(a==xp || a==xpp){
      x++;
    }
    else if(a==xm || a==xmm){
        x--;
    }
}
cout << x;
    return 0;
}