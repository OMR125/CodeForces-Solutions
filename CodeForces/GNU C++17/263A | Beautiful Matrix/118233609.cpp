#include <iostream>
#include <cmath>
#include <locale>
#include <algorithm>
using namespace std;
 
int main()
{
    int row,clm,val;
 for(row = 1 ; row <=5 ; row++){
 
 for(clm= 1 ; clm <=5; clm++){
    cin >> val;
    if(val == 1){
        cout << abs(row - 3) + abs(clm - 3);
 
    }
 }
 }
 
 
return 0;
   }
 
 