#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,counter=0;
    cin >> t;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(s == "Tetrahedron")
            counter += 4;
        else if(s == "Cube")
            counter += 6;
        else if(s == "Octahedron")
            counter += 8;
        else if(s == "Dodecahedron")
            counter += 12;
        else if(s == "Icosahedron")
            counter += 20;        
    }
    cout << counter ;
}