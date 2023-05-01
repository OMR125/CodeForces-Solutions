#include <iostream>
#include <deque>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n,m;
    cin >> n >> m;
    int arr[1000];
    for(int i=0;i<m;i++)cin >> arr[i];
    sort(arr,arr+m); //5,7,10,10,12,22,23 // n = 5, m = 7
    int mn =arr[n-1]-arr[0];
    for(int i=0,dif;i<=m-n;i++){
        dif=arr[i+n-1]-arr[i];
        if(mn>dif)mn=dif;
    }
    cout << mn;
    return 0;
}