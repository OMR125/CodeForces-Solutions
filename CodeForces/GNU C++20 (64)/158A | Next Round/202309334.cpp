#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    int n,k,cnt=0;
    cin >> n >> k;
    k--;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
        if(arr[i]>=arr[k] && arr[i]>0) cnt++;
    }
    cout << cnt<<endl;
    return 0;
}