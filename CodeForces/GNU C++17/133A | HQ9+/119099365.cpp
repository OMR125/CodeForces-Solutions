#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    if(s.find('H') != string::npos||s.find('Q') != std::string::npos||s.find('9') != std::string::npos){
        cout <<"YES";
    }
    else{cout <<"NO";}
    return 0;
}