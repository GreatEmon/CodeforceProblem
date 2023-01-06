
#include <bits/stdc++.h>
using namespace std;
 
 int main(){
    int d,maxSum;
    cin >> d >> maxSum;
    int a[d][2];
    for(int i=0;i<d;i++){
        cin >> a[i][0] >> a[i][1];
    }
    int maxStudy = 0;
    for(int i=0;i<d;i++){
        maxStudy += a[i][1];
    }
    if(maxSum > maxStudy){
        cout << "NO";
    }else{
        int count = 0,i=0;
        int study[d] = {0};
        while(count != maxSum){
           if((count + a[i][1]) <= maxSum){
                study[i] = a[i][1];
                count += a[i][1];
           }else{
                    study[i] = maxSum - count;
                    break;
           }
           i++;
        }
        cout << "YES\n";
        for(int i=0;i<d;i++){
            cout << study[i] << " ";
        }
    }

 }