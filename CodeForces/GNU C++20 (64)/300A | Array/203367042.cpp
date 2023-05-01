#include <iostream> 
#include <deque>
 
using namespace std;
 
int main() {
    deque<int> pos,neg,zero;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x<0)
            neg.push_back(x);
        else if(x>0)
            pos.push_back(x);
        else
            zero.push_back(x);
}
    if(pos.empty()){
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }
    if(neg.size()%2==0){
        zero.push_back(neg.back());
        neg.pop_back();
    }
    cout<<neg.size()<<" ";
   for (int i=0;i<neg.size();i++){
     cout<<neg.at(i)<<" ";
     }
     cout<<endl;
     cout<<pos.size()<<" ";
    for (int i=0;i<pos.size();i++){
     cout<<pos.at(i)<<" ";
     }
     cout<<endl;
     
    cout<<zero.size()<<" ";
    for (int i=0;i<zero.size();i++){
     cout<<zero.at(i)<<" ";
     }
     cout<<endl;
    return 0;
}