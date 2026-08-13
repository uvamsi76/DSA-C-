#include<bits/stdc++.h>

using namespace std;

int main(){
    int c=1;
    for(int i=0;i<5;i++){
        for(int j=4; j>0; j--){
            if(j<=i){
                cout<< '*';
            }
            else{
                cout << ' ';
            }
        }
        for(int k=0; k<5; k++){
            if(k<=i){
                cout<< '*';
            }
            else{
                cout << ' ';
            }
        }
        cout << endl;
    }
}