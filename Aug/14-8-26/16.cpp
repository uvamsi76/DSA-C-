#include<bits/stdc++.h>

using namespace std;

int main(){
    char a='A';
    for(int i=0; i<5;i++){
        for(int j=0; j<=i;j++){
            cout << char(a);
        }
        cout << endl;
        a++;
    }
}