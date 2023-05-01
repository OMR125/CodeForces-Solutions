#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int arr[56],a,b,c;
  cin >> a >> b >> c;
   arr[0]=(a+b)*c;
   arr[1]=a+c*b;
   arr[2]=(b+c)*a;
   arr[3]=a*c*b;
   arr[4]=a+b+c;
   arr[5]=a*b+c;
   cout<<*max_element(arr,arr+6);
 
 
    return 0;
}