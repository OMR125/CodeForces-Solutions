#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   int n,k,l,cnt=0;
   cin >> n>>k;
   int x[250];
   for(int i=0;i<k;i++){
    cin >> x[i];
   }
   cin>> l;
   for(int i=k;i<l+k;i++){
    cin >> x[i];
   }
   sort(x,x+l+k);
   for(int i=0;i<l+k;i++){
    if(x[i]!=x[i+1]){
        cnt++;
    }
   }
   if(cnt==n){cout << "I become the guy.";}
   else{cout << "Oh, my keyboard!";}
    return 0;
}