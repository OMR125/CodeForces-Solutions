#include <iostream>
 
using namespace std;
 
int main()
{int h,n,sum=0,arr[1001];;
    cin >> n >> h;
    for(int i=0;i<n;i++){
        cin >> arr[i];
if(arr[i]>h){arr[i]=2;}
    else{arr[i]=1;}
    sum+=arr[i];
    }
   cout << sum;
    return 0;
}