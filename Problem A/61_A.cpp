#include <bits/stdc++.h>
using namespace std;

int main(){
    string n1,n2,n;
    cin >> n1 >> n2;
    for(int i = 0;i<n1.size();i++){
        if(n1[i] != n2[i])
            n += "1";
        else   
            n += "0";
    }
    cout << n;
}