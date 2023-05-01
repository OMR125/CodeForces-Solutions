#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main() {
    long long n;
    int x=4;
    set<long long>s;
    while(x--){
    int a;
    cin >>a ;
    s.insert(a);
    }
    cout << 4-s.size();
    return 0;
}