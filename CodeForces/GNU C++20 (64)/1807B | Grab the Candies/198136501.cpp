#include <iostream>
#include <algorithm>
using namespace std;
 
 
 
int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
    int n,first=0,second=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >>a;
        if(a%2==0) first +=a;
        else second += a;
    }
    if(first > second ) cout << "YES\n";
    else cout << "NO\n";
    }
}