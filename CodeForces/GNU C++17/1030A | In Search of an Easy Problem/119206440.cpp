#include <iostream>
 
using namespace std;
 
int main()
{
    int n,a,sum=0;
    cin >>n;
    for(int i=0;i<n;i++){
        cin >> a;
        sum+=a;
    }
    if(sum>0){cout << "HARD";}
    else{cout << "EASY";}
    return 0;
}