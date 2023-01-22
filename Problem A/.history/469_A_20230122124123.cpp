#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool all = true;
    cin >> n;
    int p,q;
    cin >> p;
    vector<int> a(p);
    for(int i=0;i<p;i++)
        cin >> a[i];
    cin >> q;
    a.resize(p+q);
    for(int i=p;i<(q+p);i++)
        cin >> a[i];
    
    sort(a.begin(),a.end());
    for(int i=0;i<(p+q);i++)
    
    if(n <= a[p+q-1])
        cout << "I become the guy.";
    else   
        cout << "Oh, my keyboard!";
}