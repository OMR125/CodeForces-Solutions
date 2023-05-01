#include <iostream>
#include <set>
 
 
using namespace std;
 
 
int main()
{   cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    string s;
    set<char> n;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z')
        n.insert(s[i]);
    }
    cout << n.size();
    return 0;
}