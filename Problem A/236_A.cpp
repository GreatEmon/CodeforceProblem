#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int a[26] ={0};
    for(int i=0;i<s.size();i++){
        a[(s[i]-97)] = 1;
    }
    int sum = 0;
    for(int i=0;i<26;i++){
        sum+=a[i];
    }
    if(sum%2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
}