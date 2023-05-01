#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <map>
 
 
using namespace std;
 
 
int main()
{   cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    int n,cnt =0;
    cin >> n;
    while(n--){
        string x;
        cin >> x;
        if(x[1]=='+') cnt++;
        else cnt--;
    }
    cout << cnt;
    return 0;
}