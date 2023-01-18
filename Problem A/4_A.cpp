#include<iostream>
using namespace std;

int main(){
    short int n;
    cin >> n;
    if(n%2 == 0 && n>=4){
        cout << "YES";
    }else{
        cout << "NO";
    }
}