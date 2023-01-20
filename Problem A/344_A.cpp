#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,group=1;
    cin >> n;
    int magnet[n];
    for(int i=0;i<n;i++){
        cin >> magnet[i];
        if(i>=1)
            if(magnet[i] != magnet[i-1]) group++;
    }
    cout << group;
}