#include <iostream>
#include <algorithm>
using namespace std;
 
 
 
int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    int n,a,b,c;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        if (a+b==c) cout << '+' << endl;
        else cout << '-' << endl;
    }
}