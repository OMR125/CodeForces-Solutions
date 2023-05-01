#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
int main()
{
 
   string arr;
   cin >> arr;
int k = arr.size();
  arr.erase(remove(arr.begin(), arr.end(), '+'), arr.end());
  sort(arr.begin(),arr.end());
for(int i = 0 ; i <k-1 ; i++ ){
    arr.insert(++i,"+");
}
 
  cout << arr;
 
 
 
return 0;
   }
 
 