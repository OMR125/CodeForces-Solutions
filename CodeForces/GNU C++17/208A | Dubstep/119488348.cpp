#include <iostream>
 
using namespace std;
 
int main()
{
    string k;
    int cnt=1;
    cin >> k;
    for(int i =0;i<k.size();i++){
        if(k[i]=='W'&&k[i+1]=='U'&&k[i+2]=='B'){
                i+=2;
        if(!cnt){
            cout << " ";
        }
        continue;
        }
        else{cnt=0;
             cout << k[i];
        }
    }
    return 0;
}