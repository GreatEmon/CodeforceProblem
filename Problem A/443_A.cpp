#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int counter = 0;
    getline(cin,s);
    int a[26];
    for(int i=1;i<s.size()-1;i+=3){
        a[s[i]-97] = 1;
    }
    for(int i=0;i<26;i++){
        if(a[i] == 1)
            counter++;
    }
    cout << counter;
}