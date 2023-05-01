#include <iostream>
#include <vector>
#include <deque>
#include <set>
 
typedef long long ll;
using namespace std;
#define OMR125 cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define pp pair<int,int>
 
int main(){
    OMR125
    int t,n,a;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int>v1,v2;
        for(int i=0;i<n;i++){
            cin >> a;
            v1.push_back(a);
        }
        int start,check=1,dif;
        for(int i=0;i<n;i++){
            cin >> a;
            v2.push_back(a);}
        for(int i=0;i<n;i++){
            if(v1[i]!=v2[i]){
                dif = v2[i]-v1[i];
                if(dif<0){
                    check=0;
                    break;
                }
                start = i;
                break;
            }
        }
 
            if(check){
                for(int i=start;i<n;i++){
                if(v1[i]!=v2[i])v1[i]+=dif;
                else break;
                }
                for(int i=0;i<n;i++){
                if(v1[i]!=v2[i]){
                    check=0;
                    break;
                }
            }
            }
        if(check)cout << "YES\n";
        else cout << "NO\n";
 
 
    }
 
}
 