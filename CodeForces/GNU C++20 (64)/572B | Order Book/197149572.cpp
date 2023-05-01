#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
 
using namespace std;
 
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.first > b.first);
}
 
int main()
{   cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    int t,n;
    map<int,int>b0,s0;
    cin >> t >> n ;
     while(t--){
        char k;
        int a,bb;
        cin >> k >> a >> bb;
        if(k=='B'){
            b0[a] += bb;
        }
        else s0[a] +=bb;
     }
     vector<pair<int,int>>b,s;
     for(auto it:b0){
        b.push_back(make_pair(it.first,it.second));
     }
     for(auto it:s0){
        s.push_back(make_pair(it.first,it.second));
     }
     sort(b.begin(),b.end(),greater<pair<int,int>>());
     sort(s.begin(),s.end());
     while(s.size()>n){
        s.pop_back();
     }
     sort(s.begin(),s.end(),greater<pair<int,int>>());
     int z = n;
     for(int i=0;i<s.size()&&z;i++){
        cout << "S " << s[i].first << " " << s[i].second << "\n";
        z--;
     }
     for(int i=0;i<b.size()&&n;i++){
        cout << "B " << b[i].first << " " << b[i].second << "\n";
        n--;
     }
 
    return 0;
}
 
 