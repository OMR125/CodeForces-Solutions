#include<iostream>
 
using namespace std;
 
int main()
{
 
    int n,cnt=0;
    cin >> n;
    int a,b;
    for(int j=0;j<n;j++){
            cin >>a>>b;
            if(a%b!=0){
            cout << b-(a%b) << endl;}
                    else{
                        cout <<0 << endl;
                    }
                }
 
 
 
    return 0;
}