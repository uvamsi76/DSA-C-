#include<bits/stdc++.h>

using namespace std;

int main(){
    for(int i=0; i<5;i++){
        int a=true;
        if(i%2!=0){
            a=!a;
        }
        for(int j=0;j<=i;j++){
            cout << a <<' ';
            a=!a;
        }
        cout << endl;
    }
}