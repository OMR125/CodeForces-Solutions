#include <bits/stdc++.h>
#include <cmath>
 
using namespace std;
 
 
void o(){cout << 1;}
void newline(){cout << "\n";}
 
 
 
 
 
int main()
{   cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    int n;
    cin >> n;
    while(n--){
    int h,w;
    cin >> h >> w;
    for(int i = 0 ; i<h;i++){
        for(int j = 0; j<w;j++){
            if(i==0&&j==0){o();}
            else if(i==0 && j==w-1){o();}
            else if(i==h-1&&j==w-1){o();}
            else if(j==0 && i==h-1){o();}
            else if(i==0&& j%2==0 && j!=w-2){o();}
            else if(i==h-1 &&j%2==0&&j!=w-2){o();}
            else if(j==0&&i%2==0&&i!=h-2){o();}
            else if(j==w-1&&i%2==0&&i!=h-2){o();}
            else{cout << 0;}
    }
    newline();
    }
    newline();
    }
    return 0;
}