#include <iostream>
 
using namespace std;
 
int main()
{
    int n,sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        string k;
        cin >> k;
        if(k=="Tetrahedron"){sum+=4;}
        else if(k=="Cube"){sum+=6;}
        else if(k=="Octahedron"){sum+=8;}
        else if(k=="Dodecahedron"){sum+=12;}
        else{sum+=20;}
    }
    cout << sum;
    return 0;
}