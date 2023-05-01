#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
    int n;
    double ans,sum=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    ans=sum/n;
cout << fixed << setprecision(12) <<(ans);
 return 0;
}