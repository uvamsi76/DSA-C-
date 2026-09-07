#include<bits/stdc++.h>

using namespace std;

int main(){
    for(int i=0; i<5;i++){
        for(int j=0;j<5;j++){
            if(j<=i){
                cout<<'*';
            }
            else{
                cout << ' ';
            }
        }
        cout << endl;
    }
    
    for(int i=0; i<4;i++){
        for(int j=0; j<4;j++){
            if(4-j>i){
                cout << '*';
            }
            else{
                cout << ' ';
            }
        }
        cout << endl;
    }
}