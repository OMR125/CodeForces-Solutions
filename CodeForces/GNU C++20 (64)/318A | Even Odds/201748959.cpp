#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <map>
 
 
using namespace std;
 
 
int main()
{   cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    long long n, a;
    cin >> n >> a;
    if (a<=(n + 1)/2) cout << a*2-1;
    else cout << (a-(n+1)/2)*2;
    return 0;
}