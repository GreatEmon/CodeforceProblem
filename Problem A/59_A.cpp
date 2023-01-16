#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,s1,s2;
    cin >> s;
    s1 = s;
    s2 = s;
    int s_count = 0,c_count = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] >= 97){
           s_count++;
           s1[i] -= 32 ;
        }
        else{
           c_count++;
           s2[i] += 32;
        }
    }
    if(s_count >= c_count){
        cout << s2;
    }else{
        cout << s1;
    }

}