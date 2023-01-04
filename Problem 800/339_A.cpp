#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> a(ceil(s.size()/2));
    int index=0;
    for(int i=0;i<s.size();i+=2){

        a[index] = int(s[i]) - 48;
        index++;
    }
    for(int i=0;i<a.size();i++){
        cout << a[i] << "\n";
    }
    

}