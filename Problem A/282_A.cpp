#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x=0;
    cin >> n;
    for(int i=0;i<n;i++){
        string c;
        cin >> c;
        if(c[0]== '+' || c[2] == '+'){
            x++;
        }else{
            x--;
        }
    }
    cout << x;


}
