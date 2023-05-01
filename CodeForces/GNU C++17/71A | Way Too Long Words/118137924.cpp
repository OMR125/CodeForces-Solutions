#include <vector>
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string i;
    int n;
    cin >> n;
 
 
    for(int k = n ; k>0 ; k--){
            cin >> i;
        if(i.size()>10){cout << i[0] << i.size() - 2 << i[i.size()-1] << endl; }
        else{cout << i << endl;}
    }
 
 
    return 0;
}