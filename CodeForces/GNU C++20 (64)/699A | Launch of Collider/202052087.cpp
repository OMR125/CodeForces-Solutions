#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
 
typedef long long ll;
using namespace std;
 
 
int main() {
     int n;
     string s;
     cin >> n >> s;
     int arr[n];
     vector<int>v;
     for(int i=0,a;i<n;i++)
        cin >> arr[i];
        for(int i=0;i<n-1;i++){
            int d = arr[i+1]-arr[i];
        if(s[i]=='R'&&s[i+1]=='L'){
            v.push_back(d/2);
        }
        }
   if(v.empty())cout << -1;
   else cout << *min_element(v.begin(),v.end());
}