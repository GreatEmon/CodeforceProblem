#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count =0;
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
    
    if(n <=a count)
        cout << "I become the guy.";
    else   
        cout << "Oh, my keyboard!";
}