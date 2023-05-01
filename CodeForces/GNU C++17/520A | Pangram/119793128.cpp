#include <bits/stdc++.h>
using namespace std;
 
int main()
{   int n,cnt=0;
string k;
cin >> n >>k;
for_each(k.begin(), k.end(), [](char & c){
    c = ::tolower(c);});
    sort(k.begin(),k.end());
   for(int i=0;i<n;i++){
    if(k[i]!=k[i+1]){cnt++;}
   }
   if(cnt==26){cout << "YES";}
   else{cout << "NO";}
    return 0;
}