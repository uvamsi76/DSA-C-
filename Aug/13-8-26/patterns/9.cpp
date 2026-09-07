#include<bits/stdc++.h>

using namespace std;


int main(){
    for(int i=0; i<5;i++){
        for(int j=0;j<5;j++){
            if(j+i>=4){
                cout << '*';
            }
            else{
                cout << ' ';
            }
        }
        for(int k=0;k<4;k++){
            if(k<i){
                cout << '*';
            }
            else{
                cout << ' ';
            }
        }
        cout << endl;
    }

    for(int i=0; i<5;i++){
        for(int j=0;j<5;j++){
            if(j>=i){
                cout << '*';
            }
            else{
                cout << ' ';
            }
        }
        for(int k=0;k<4;k++){
            if(i+k<4){
                cout << '*';
            }
            else{
                cout << ' ';
            }
        }
        cout << endl;
    }
}