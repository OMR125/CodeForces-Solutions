#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
 
using namespace std;
 
 
 
int main()
{   cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    int n,t;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> t;
    sort(arr,arr+n);
    while(t--){
        int q;
        cin >> q;
        if(arr[0]>q) cout << "0\n";
        else if(arr[n-1]<=q) cout << n << "\n";
        else{
            int ans,mid,low=0,high=n-1;
            while(low<=high){
                mid = (low+high)/2;
                if(arr[mid]<=q){
                    ans = mid +1;
                    low = mid + 1;
                }
                else{
                     high = mid - 1;
                }
 
            }
            cout << ans << "\n";
        }
    }
 
    return 0;
}
 
 