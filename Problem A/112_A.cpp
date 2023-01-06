#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    int result=0;
    cin >> a >> b;
    for(int i=0;i<a.size();i++){
        if(a[i] >= 'A' && a[i] <= 'Z'){
            a[i] += 32;
        }
    }
    for(int i=0;i<b.size();i++){
        if(b[i] >= 'A' && b[i] <= 'Z'){
            b[i] += 32;
        }
    }

    for(int i=0;i<a.size();i++){
        if(a[i] == b[i]){
            continue;
        }
        if(a[i] > b[i]){
            result = 1;
            break;
        }
        if(a[i] < b[i]){
            result = -1;
            break;
        }
    }
    cout << result;

}
