#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int a[t],b[t];
        cin >> a[i] >> b[i];
        int counter = 0;
        while(a%b != 0){
            a++;
            counter++;
        }
        cout << counter;
    }
}