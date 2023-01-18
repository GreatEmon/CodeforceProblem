#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h,counter=0;
    cin >> n >> h;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++){
        counter = (a[i]%h) == 0 ? counter + (a[i]/h): counter + ((a[i]/h)+1) ;
    }
    cout << counter;
}