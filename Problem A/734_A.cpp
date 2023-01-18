#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a_counter=0,d_counter =0;
    cin >> n;
    char s[n];
    cin >> s;
    for(int i=0;i<n;i++){
        if(s[i] == 'A')
            a_counter++;
        else
            d_counter++;
    }

    if(a_counter > d_counter)
        cout << "Anton";
    else if(a_counter < d_counter)
        cout << "Danik";
    else
        cout << "Friendship";
}