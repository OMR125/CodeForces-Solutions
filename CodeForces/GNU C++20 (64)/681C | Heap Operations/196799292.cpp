#include <iostream>
#include <queue>
 
 
using namespace std;
 
 
int main()
{   cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    priority_queue<int,vector<int>,greater<int>>q;
    vector<pair<string,int>>v;
    int n ;
    cin >>n;
    while(n--){
        string a;
        int b;
        cin >> a;
        if(a=="insert"){
            cin >> b;
            q.push(b);
            v.push_back(make_pair(a,b));
        }
        else if(a=="getMin"){
            cin >> b;
            if(!q.empty()){
                while(!q.empty() && b>q.top()){
                v.push_back(make_pair("removeMin",-99));
                q.pop();
                }
 
            if(q.empty()||b<q.top()){
                q.push(b);
                v.push_back(make_pair("insert",b));
 
            }
 
            v.push_back(make_pair("getMin",b));
            }
            else{
                q.push(b);
                v.push_back(make_pair("insert",b));
                v.push_back(make_pair("getMin",b));
            }
        }
        else{
            if(q.empty()){
                    v.push_back(make_pair("insert",0));
                    v.push_back(make_pair("removeMin",-99));
            }
            else{
            v.push_back(make_pair("removeMin",-99));
            q.pop();
            }
        }
    }
        cout << v.size() << "\n";
        for(int i=0;i<v.size();i++){
            if(v[i].first=="removeMin"){
                cout << v[i].first << "\n";
            }else{
            cout << v[i].first << " " << v[i].second << "\n";
            }
        }
 
 
    return 0;
}