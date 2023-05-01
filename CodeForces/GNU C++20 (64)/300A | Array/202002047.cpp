#include <iostream>
#include <algorithm>
#include <vector>
 
typedef long long ll;
using namespace std;
 
 
int main() {
    int n;
    cin >> n;
    vector<int>vn,vp,v0;
    for(int i=0;i<n;i++){
        int a;
        cin >>a;
        if(a>0)vp.push_back(a); // 1 2 3
        else if(a<0)vn.push_back(a); // -2 -5
        else v0.push_back(a); //0
    }
    if(vp.empty()){
        vp.push_back(vn.back());
        vn.pop_back();
        vp.push_back(vn.back());
        vn.pop_back();
    }
    if(vn.size()%2==0){
        v0.push_back(vn.back());
        vn.pop_back();
    }
    cout << vn.size() << " ";
    for(auto it:vn)cout << it << " ";
    cout << endl;
    cout << vp.size() << " ";
    for(auto it:vp)cout << it << " ";
    cout << endl;
   cout << v0.size() << " ";
    for(auto it:v0) cout << it << " ";
 
}