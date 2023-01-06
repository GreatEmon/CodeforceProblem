#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[5][5];
    int xi,xj,counter = 0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j] == 1){
                xi = i;
                xj = j;
            }
        }
    }

    counter = abs(xi-2) + abs(xj-2);
    cout << counter;

}
