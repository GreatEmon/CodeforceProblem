#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int counter = 0;
    cin.getline(s.);
    int a[26];
    cout << s.size() << endl;
    for(int i=1;i<s.size();i++){
        cout << s[i] << endl;
        a[s[i]-97] = 1;
    }
    for(int i=0;i<26;i++){
        if(a[i] == 1)
            counter++;
    }
    cout << counter;
}