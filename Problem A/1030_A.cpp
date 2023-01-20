#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool e = true;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x == 1)
            e = false;
    }
    if(e)
        cout << "EASY";
    else
        cout << "HARD";
}