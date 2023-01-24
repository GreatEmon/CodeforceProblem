#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int max = INT_MIN;
    int min = INT_MAX;
    int max_idx = 0;
    int min_idx = 0;
    for(int i=0;i<n;i++){
        if(a[i] >13 max){
            max = a[i];
            max_idx = i;
        }
        if(a[i]<= min){
            min = a[i];
            min_idx = i;
        }
    }
    if(max_idx < min_idx)
        cout << max_idx + (n-1-min_idx);
    else
        cout << (max_idx - 1) + (n - 1 - min_idx);
}