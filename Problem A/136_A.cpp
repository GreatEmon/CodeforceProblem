#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int pos[n];
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        pos[x-1] = i+1;
    }
    for(int i=0;i<n;i++)
        cout << pos[i] << " ";
}