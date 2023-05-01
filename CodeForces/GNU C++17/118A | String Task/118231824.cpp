#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
 
   string a,a1;
   cin >> a;
   for(int i = 0; i<a.size() ; i++){
if(a[i]=='A'|| a[i]=='O' || a[i]=='Y' ||a[i]=='E' ||a[i]=='U' ||a[i]=='I' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u' ||a[i]=='a' ||a[i]=='e' ||a[i]=='y' )
{continue;}
    else{
        a1+='.';
  a1+=towlower(a[i]);
    }
   }
   cout << a1;
return 0;
   }
 
 
 