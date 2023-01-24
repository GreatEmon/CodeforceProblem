#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool flag = true;
    cin >> n;
    if(n >= 26){
        char a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int al[26] = {0};
        for(int i=0;i<n;i++){
            if(a[i] >= 65 && a[i]<=90){
                al[a[i]-65] = 1;
            }else{
                al[a[i]-97] = 1;
            }
        }
        for(int i=0;i<26;i++){
            if(al[i] == 0){
                flag = false;
                break;
            }
        }
        if(flag)
            cout << "YES";
        else
            cout << "NO";
    }else{
        cout << "NO";
    }
}