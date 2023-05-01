#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool k(pair<long long ,long long >a,pair<long long,long long>b){
    return (a.first-a.second)>(b.first-b.second);
}
 
int main() {
    long long n,m;
    cin >> n >> m;
    long long sum=0,cnt=0;
    vector<pair<long long,long long>>v;
    for(long long i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
        sum+=a;
    }
    sort(v.begin(),v.end(),k);
    for(long long i=0;i<n;i++){
        if(sum>m){
            sum=sum-v[i].first+v[i].second;
            cnt++;
        }
        else break;
        //cout << sum << endl;
    }
    if(sum>m)cout <<-1;
    else cout << cnt;
}