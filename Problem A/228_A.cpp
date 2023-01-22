#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a[4],counter = 3;
    for(int i=0;i<4;i++){
        cin >> a[i];
    }
    sort(a,a+5);
    for(int i=0;i<3;i++){
        if(a[i] != a[i+1])
            counter--;
    }
    cout << counter;
}