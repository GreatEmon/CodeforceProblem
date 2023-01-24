#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int a[t],b[t];
    for(int i=0;i<t;i++){
        cin >> a[i] >> b[i];
    }
    for(int i=0;i<t;i++){
        int counter = 0;
        while(a%b != 0){
            a++;
            counter++;
        }
        cout << counter;
    }
}