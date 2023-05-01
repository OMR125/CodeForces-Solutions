#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <deque>
#include <cmath>
 
typedef long long ll;
using namespace std;
 
 
 
int main() {
     int t,ones=0,twos=0,threes=0,fours=0,cars=0;
     cin >> t;
     while(t--){
        int a;
        cin >> a;
        if(a==1)ones++;
        else if(a==2)twos++;
        else if(a==3)threes++;
        else fours++;
     }
     cars = fours+threes+twos/2+twos%2;
        ones-=threes;
     if(ones>0){
        if(twos%2){
            cars+=((ones+1)/4);
        }
        else cars+=ceil(ones/4.0);
     }
     cout << cars;
     }