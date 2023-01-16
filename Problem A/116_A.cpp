#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int max_capacity=0,counter=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        counter = counter - a + b;
        max_capacity = max(max_capacity,counter);
    }
    cout << max_capacity;
}