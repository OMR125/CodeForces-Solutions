#include <iostream>
#include<math.h>
using namespace std;
 
int main() {
int n,a,counter=0;
cin >> n ;
while(n--){
    cin >> a;
    counter=0;
    while(a!=1){
        if(a%6==0){
            a = a/6;
            counter++;
        } else{
            a = a*2;
            counter++;
            if(a%6!=0){
                counter=-1;
                break;
            }
        }
    }
        cout << counter << endl;
 
}
 
 
 return 0;
}