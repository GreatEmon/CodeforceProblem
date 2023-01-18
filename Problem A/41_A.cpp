#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    bool flag = true;
    cin >> s;
    cin >> t;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i] == t[n-i-1]){
            continue;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
}