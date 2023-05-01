#include <iostream>
#include <stack>
#include <deque>
#include <vector>
 
 
typedef long long ll;
using namespace std;
#define OMR125 cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define pp pair<int,int>
#define out(flag) cout << (flag ? "YES" : "NO") << endl;
 
int main() {
    OMR125
    int n; cin >>n;
    int arr[n];
    for(int i=0;i<n;i++)cin >> arr[i];
    sort(arr,arr+n);
    swap(arr[0],arr[n-1]);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
 