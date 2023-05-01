#include <iostream>
#include <algorithm>
#include <vector>
 
typedef long long ll;
using namespace std;
 
 
int main() {
    int n;
    cin >> n;
    vector<int>a,b,c;
    for(int i=1;i<=n;i++){
        int x;
        cin >> x;
        if(x==1) a.push_back(i); // 2
        else if(x==2)b.push_back(i); // 3
        else c.push_back(i); //5 // cnt = min
    }
    int cnt = min(a.size(),min(b.size(),c.size()));
    cout << cnt << "\n";
    for(int i=0;i<cnt;i++){
        cout << a[i] << " " << b[i] << " " << c[i] << "\n";
    }
}