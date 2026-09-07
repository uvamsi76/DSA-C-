#include<bits/stdc++.h>

using namespace std;

int main(){
    char a = 'E';
    for(int i=0; i<5; i++){
        for(int j=0;j<=i;j++){
            cout << char(a+j) <<' ';
        }
        cout << endl;
        a--;
    }
}