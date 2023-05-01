#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n,m;cin>>m>>n;int arr1[n];for(int i=0;i<n;++i){cin>>arr1[i];}
    int i=0,c=0,j=0;sort(arr1,arr1+n);vector <int>v(n);
    for(int i=0;c+1<n;++i){
        c=m-1+i;
        v[j] =arr1[c]-arr1[i];
        j++;}
        v.resize(j);v.shrink_to_fit();
    sort(v.begin(),v.end());
    cout<<v[0];
    return 0;
}