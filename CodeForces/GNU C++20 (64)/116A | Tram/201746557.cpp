#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int p = 0,current=0;
    for(int i=0;i<n;i++){
    int exit,enter;
    cin >> exit >> enter;
    current = current-exit+enter;
    if(current>p)p=current;
}
    cout << p;
    return 0;
}