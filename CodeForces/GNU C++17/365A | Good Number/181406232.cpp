#include <iostream>
using namespace std;
int main() {
 
int n,k,sum=0;
  cin>>n>>k;
string t;
 
while(n--){
        cin >> t ;
int a[10] = {0};
    for (int j=0;j<=t.length();j++) {
 
        a[t[j] - '0']++;
    }
    bool x=0;
    for(int j=0;j<=k;j++) {
        if(a[j]==false){
            x = true;
              break;}
    }if(x==false)
        sum++;
 
}cout<<sum;
    return 0;
}