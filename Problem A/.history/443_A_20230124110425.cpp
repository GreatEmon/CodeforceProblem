#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int a[26];
    for(int i=1;i<s.size()-1;i+=2){
        a[s[i]-97] = 1;
    }
    for(int i=0;i<26;i++)
}