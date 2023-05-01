#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main()
{
     long long n,m,a;
    cin >> n >> m >> a;
 
    long long val = ceil((double)m/a)*ceil((double)n/a);
   cout << val;
 
    return 0;
}