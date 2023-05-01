#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    char n[20];
    int cnt=0;
    cin >>n;
    for(int i=0;i<strlen(n);i++){
      if(n[i]=='4'||n[i]=='7'){cnt++;}
    }
    if(cnt==4||cnt==7){cout << "YES";}
    else{cout <<"NO";}
 
    return 0;
 
    }