#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int l,ans = 1;
    string k;
    cin >> k;
    l=k.size();
    sort(k.begin(),k.end());
    for(int i =0 ; i<l-1;i++){
        if(k[i]!=k[i+1]){
            ans++;
        }
    }
    if(ans%2==0){
            cout << "CHAT WITH HER!";
    }
    else{
            cout << "IGNORE HIM!";
    }
 
 
 
 
 
 
    return 0;
}