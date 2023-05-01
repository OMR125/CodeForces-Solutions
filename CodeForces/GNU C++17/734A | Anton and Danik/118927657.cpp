#include <iostream>
using namespace std;
int main()
{
    int n,a=0,d=0;
    string k;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        if(k[i]=='D'){
                d++;
        }
     else if(k[i]=='A'){
            a++;
     }
    }
    if(a>d){cout << "Anton";}
    else if(a<d){cout << "Danik";}
    else{cout << "Friendship";}
    return 0;
}