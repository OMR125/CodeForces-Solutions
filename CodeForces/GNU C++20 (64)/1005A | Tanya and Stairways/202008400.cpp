#include <iostream>
#include <algorithm>
#include <vector>
 
typedef long long ll;
using namespace std;
 
 
int main() {
     int n,cnt=1;
     vector<int>steps;
     cin >> n;
     int arr[n];
     for(int i=0;i<n;i++)cin >> arr[i];
     for(int i=0;i<n;i++){
        if(arr[i+1]<=arr[i]){
            steps.push_back(cnt);
            cnt=1;
        }
        else{
            if(i==n-1)steps.push_back(cnt);
            else cnt++;
 
        }
     }
     cout << steps.size() << "\n";
     for(auto it:steps)cout << it << " ";
}