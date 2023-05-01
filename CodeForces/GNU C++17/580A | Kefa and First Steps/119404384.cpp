#include <iostream>
using namespace std;
 
int main()
{
    int n,cnt=1,sum=1;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
      // if(i>0)
       if(arr[i]>=arr[i-1]){
        cnt++;
       sum=max(sum,cnt);
       }else{cnt=1;}
       }
   cout << sum;
    return 0;
}