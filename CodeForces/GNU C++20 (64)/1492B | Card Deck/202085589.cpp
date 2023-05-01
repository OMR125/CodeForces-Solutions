#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <deque>
 
typedef long long ll;
using namespace std;
 
 
 
int main() {
     int t;
     cin >> t;
     while(t--){
        int n;
        cin >> n;
        stack<int>s;
        vector<int>v;
        for(int i=0,a;i<n;i++){
            cin >> a;
            v.push_back(a);
        }
        v.push_back(n+1);
        int mx=v[0],e=0;
        // 4 2 5 3 6 1 7
        for(int i=1;i<=n;i++){
            if(v[i]>mx){
                for(int j=i-1;j>=e;j--) s.push(v[j]);
                e=i; //2
                mx=v[i]; // 5
            }
        }
        while(s.size()){
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
 
     }
 
     }