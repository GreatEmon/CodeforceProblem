#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    char a[n];
    cin >> a;
    for(int i=0;i<t;i++){
        for(int j=1;j<n;j++){
            if(a[j-1] == 'B' && a[j] == 'G'){
                swap(a[j],a[j-1]);
                j++;
            }
        }
    }
    cout << a;
}