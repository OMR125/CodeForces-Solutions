// Online C++ compiler to run C++ program online
#include <iostream>
#include <set>
#include <algorithm>
 
using namespace std;
 
int main()
{
    string s;
    int n;
    cin >> n>>s;
    set<char>k;
    for(int i=0;i<s.length();i++){
        k.insert(tolower(s[i]));
    }
    if(k.size()>=26)cout << "YES";
    else cout <<"NO";
    return 0;
}
 
 
 