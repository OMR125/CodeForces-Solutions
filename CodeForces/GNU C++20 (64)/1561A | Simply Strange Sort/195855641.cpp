#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    while(n--){
        int k, t=0;
        cin >> k;
        int arr[k];
      for(int i=0;i<k;i++) {cin >> arr[i];}
 
      while(!is_sorted(arr,arr+k)){
            for(int j=t%2;j<k-1;j+=2){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
         t++;
 
      }
      cout << t << "\n";
    }
    return 0;
}