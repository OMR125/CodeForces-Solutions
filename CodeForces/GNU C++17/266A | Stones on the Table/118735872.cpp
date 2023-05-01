#include <iostream>
 
using namespace std;
 
int main()
{
    int n,val=0 ;
    string k;
    cin >> n;
    cin >> k;
    for(int i = 0 ; i<n-1 ;i++){
 
    if(k[i] == k[i+1]){
        val++;
    }
    else{continue;}
 
 
    }
    cout << val;
    return 0;
}