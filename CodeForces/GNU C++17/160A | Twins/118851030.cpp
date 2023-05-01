#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{ int n,cnt=0,bsum=0,msum=0;
cin >> n;
int c[n];
for(int i=0;i<n;i++){
    cin >> c[i];
    bsum+=c[i];
}
bsum=bsum/2;
sort(c,c+n);
for(int i=n-1;i>=0;i--){
msum+=c[i];
++cnt;
if(msum>bsum){break;}
}
cout << cnt;
 
    return 0;
}