#include <iostream>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    for(long long i=0;i<s.length();i++){
        if(i==0&&s[i]=='9')cout << '9';
        else if(s[i]>='5'){
            cout << '9'-s[i];
        }
        else cout << s[i];
    }
 
    return 0;
}