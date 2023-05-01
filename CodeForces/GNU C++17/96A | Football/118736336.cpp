#include <iostream>
 
using namespace std;
int main()
{
int n,c=0;
string k;
cin >>k;
    for(int i = 0 ; i<k.size()-1;i++)
        {
    if(k[i]==k[i+1] )
     {c++;}
     else if(c>=6){
        break;}
     else{c=0;}
    }
if(c>=6){
        cout << "YES";
}
else{
        cout << "NO";
}
 
return 0;}