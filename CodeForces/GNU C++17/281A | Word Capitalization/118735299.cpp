#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string k;
    cin >> k;
    char s = towupper(k[0]);
       k.erase(k.begin(),k.begin()+1);
    cout << s << k;
 
    return 0;
}