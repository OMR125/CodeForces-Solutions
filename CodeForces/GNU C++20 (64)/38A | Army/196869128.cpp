#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
        int n;
        cin >> n;
    int year[n-1];
    for (int i = 0; i < n-1; i++)
        cin >> year[i];
    int a,b;
    cin >> a >> b;
    int sum =0;
    for (int i = a-1; i < b-1;i++)
        sum += year[i];
    cout << sum;
 
    return 0;
}