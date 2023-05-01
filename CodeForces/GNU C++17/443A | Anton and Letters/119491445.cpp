#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{   int cnt=0;
    string str;
    getline(cin,str);
    sort(str.begin(),str.end());
    str.erase(remove(str.begin(),str.end(),','),str.end());
      string::iterator end_pos = remove(str.begin(), str.end(), ' ');
    str.erase(end_pos,str.end());
    for(int i=0;i<str.size()-2;i++){
        if(str[i]!=str[i+1]){
            cnt++;
        }
    }
    cout <<cnt;
 
    return 0;
}