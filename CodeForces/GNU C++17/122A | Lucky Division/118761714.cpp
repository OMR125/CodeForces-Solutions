#include <iostream>
 
using namespace std;
 
int main()
{
    int k,val=0;
    int arr[12]={4,7,44,47,74,77,447,477,444,744,747,777};
    cin >>k;
    for(int i=0;i<12;i++){
        if(k%arr[i]==0){val=1; break;}
        else{continue;}
    }
    if(val==1){cout <<"YES";}
    else{cout << "NO";}
    return 0;
 
    }