#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>
using namespace std;
 
int main()
{
    string k,x,x1;
    int val=0;
 
    cin >> k;
    x = k;
    x1 = k;
for_each(x.begin(),x.end(),[](char &c){c=::toupper(c);});
for_each(x1.begin(),x1.end(),[](char &m){m=::tolower(m);});
    for(int i =0;i<k.size();i++)
     if(k[i]==towlower(k[i])){
        val++;
     }
     else{val--;}
 
    if(val>0){
 
                    cout << x1;
 
    }
    else if (val<0){
        cout << x;
    }
    else{cout << x1;}
 
    return 0;
}