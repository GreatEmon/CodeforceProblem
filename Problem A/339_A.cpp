#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int s_size = s.size();
    int n = (n%2 == 0) ? (s_size / 2) : ((s_size / 2) + 1 );
    int a[n+1] = {0};
    int index = 0;
    for(int i=0;i<s_size;i+=2){
        a[index] = int(s[i]) - 48;
        index++; 
    }

    sort(a,a+n+1);
    cout << a[0];
    for(int i=1;i<=n;i++){
        cout << "+" << a[i];
    }

    return 0;

}