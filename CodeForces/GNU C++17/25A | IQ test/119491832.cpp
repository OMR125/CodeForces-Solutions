#include <iostream>
 
using namespace std;
 
int main()
{
    int n,index=0,oddindex=0,cnt=0,flag=0;
     cin >> n;
     for(int i=1;i<=n;i++){
        int a;
        cin >>a;
        if(a%2==0){
            cnt++;
            index=i;
        }else{
            flag++;
        oddindex=i;}
 
     }
     if(flag>cnt){
     cout<<index;}
     else{cout<<oddindex;}
    return 0;
}