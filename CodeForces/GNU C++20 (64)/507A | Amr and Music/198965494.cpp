#include <iostream>
#include <algorithm>
#include <vector>
 
 
using namespace std;
typedef long long ll;
 
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
 
int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
   int n,m;
   cin >> n >> m;
   vector<pair<int,int>>v1;
    for (int i = 0; i <n; ++i){
        int k;
        cin >> k;
        v1.push_back(make_pair(k,i+1));
    }
    sort(v1.begin(),v1.end());
    int sum=0,cnt=0;
    for (int i = 0; i < n; ++i) {
        if (sum + v1[i].first <= m){
            sum += v1[i].first;
            cnt++;
    }else break;
    }
    sort(v1.begin(),v1.begin()+cnt, sortbysec);
    cout << cnt <<"\n";
    for(int i=0;i<cnt;i++){
        if(i==n-1)cout << v1[i].second;
        else cout << v1[i].second << " ";
    }
}