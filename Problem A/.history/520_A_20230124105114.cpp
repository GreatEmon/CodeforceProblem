#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    char a[n];
    cin >> a;
    int a[26] = {0};
    for(int i=0;i<n;i++){
        if(a[i] >= 65 && a[i]<=90){
            a[a[i]-65] = 1;
        }else{
            a[a[i]-65] = 1;
        }
    }
}