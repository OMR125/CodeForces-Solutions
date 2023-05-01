#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
struct default_map_val{long long i = -1;};
typedef long long ll;
using namespace std;
using namespace __gnu_pbds;
#define OMR125 cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define pp pair<ll,ll>
#define out(flag) cout << (flag ? "YES" : "NO") << endl;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define all(v) v.begin(),v.end()
#define prefix(arr,n) for(ll i=1;i<=n;i++){arr[i]+=arr[i-1];}
#define partial(arr,l,r,k) arr[l] += k; arr[r + 1] -= k;
const int mxN = 2e5;
bool sortbysec(pp a, pp b){return a.second<b.second;}
 
 
 
int main() {
    OMR125
    ll t;cin >> t;
    map<char,int>mchar;
    map<int,char>mint;
    int j=1;
    /*for(char i='a';i<='z';i++,j++){
        mchar[i]=j;
    }*/
    while(t--){
        string s;
        ll n,sum=0;
        cin>> s >> n;
        map<char,ll>fq;
        ll a[s.length()];
    for(ll i=0;i<s.length();i++){
        a[i]=s[i]-'a';
        //fq[s[i]]++;
    }
    sort(a,a+s.length());
    for(int i=0;i<s.length();i++){
        if(a[i]+sum+1<=n){
            sum+=a[i]+1;
            fq[a[i]+'a']++;
        }
    }
    for(int i=0;i<s.length();i++){
        if(fq[s[i]]!=0){
            cout << s[i];
            fq[s[i]]--;
        }
    }
    cout << "\n";
 
    }
}
 