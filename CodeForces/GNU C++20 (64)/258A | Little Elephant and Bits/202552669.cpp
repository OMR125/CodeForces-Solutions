#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;
typedef long long ll;
#define OMR125 cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define pp pair<int,int>
 
int main() {
    OMR125
    string s;
    cin >> s;
    if(s.find('0')!=string::npos){
        s.erase(s.find('0'),1);
    }else s = s.substr(0,s.length()-1);
    cout << s;
}