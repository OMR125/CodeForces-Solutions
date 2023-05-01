#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
    string s,h="hello";
int cnt=0,j=0;
cin >>s;
for(int i=0;i<s.size();i++){
    if(s[i]==h[j]){
        j++;
        cnt++;
    }
    if(cnt==5){
        break;
    }
}
if(cnt==5){cout<<"YES";}
else{cout<<"NO";}
 
    return 0;
}