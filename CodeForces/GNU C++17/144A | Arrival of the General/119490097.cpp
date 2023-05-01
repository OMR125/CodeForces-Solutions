#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
   int n;
   cin >> n;
   int maxel=0,maxi,minel=1000,mini;
   for(int i=0;i<n;i++){
    int k;
    cin >> k;
    if(k>maxel){
        maxel=k;
        maxi=i;
    }if(k<=minel){
    minel=k;
    mini=i;
    }
 
   }
if(maxi>mini){
    cout << (maxi-1)+(n-mini)-1;
}else{cout << (maxi-1)+(n-mini);}
 
 
   return 0;}