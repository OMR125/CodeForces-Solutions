#include <iostream>
 
 
using namespace std;
int main()
{ long long n,x;
long long kid =0;
    cin >> n >> x;
  for(int i=0;i<n;i++){
    char a;
    long long b;
    cin >> a >> b;
    if(a=='+'){
        x = x + b;
    }
    else if(x>=b && a=='-'){
        x = x - b;
    }
    else{
        kid++;
    }
  }
 
    cout << x << " " << kid;
 
 
 
return 0;
}
 