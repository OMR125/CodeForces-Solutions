#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    while(n--){
        int l1,l2;
        cin >> l1 >> l2;
        int a1[l1], a2[l2];
        vector<int> a3;
        for(int i=0; i<l1;i++) cin >> a1[i];
        for(int i=0; i<l2;i++) cin >> a2[i];
        for(int i=0;i<l1;i++){
            for(int j=0;j<l2;j++){
            if(a1[i]==a2[j]){
                    a3.push_back(a1[i]);
                    break;
                }
          
          }
          if(a3.size()==1){break;}
        }
        if(a3.size()==0){cout << "NO \n";}
        else{
        cout << "YES \n";
        cout << a3.size() << " ";
        for(int i=0;i<a3.size();i++){
            cout << a3[i] << "\n";
        }
    }
    }
    return 0;
}