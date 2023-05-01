#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    int mn=k,mx=k;
    n--;
    int cnt=0;
    while(n--){
        int a;
        cin >>a ;
        if(a<mn){
            cnt++;
            mn=a;
        }else if(a>mx){
            cnt++;
            mx=a;
        }
    }
    cout << cnt;
    return 0;
}