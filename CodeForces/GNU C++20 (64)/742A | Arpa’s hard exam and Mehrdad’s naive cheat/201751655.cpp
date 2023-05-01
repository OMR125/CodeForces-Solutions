#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main() {
    long long n;
    cin >> n;
    if(n==0){
        cout << 1;
        return 0;
    }
    if((n-1)%4==0)cout << 8;
    else if((n-2)%4==0) cout << 4;
    else if((n-3)%4==0) cout << 2;
    else if((n-4)%4==0) cout << 6;
}