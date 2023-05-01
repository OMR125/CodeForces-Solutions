#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int n,t;
    string k;
    cin >> n >> t >> k;
while(t--){
    for(int i =0;i<n;i++){
        if(k[i]=='B'&&k[i+1]=='G'){
         swap(k[i],k[i+1]);
          i++;
    }
}
}
    cout << k;
    return 0;
}