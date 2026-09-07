#include<bits/stdc++.h>

using namespace std;

int main(){
    for(int i=0;i<4;i++){
        for(int j=0; j<4;j++){
            if(j<=i){
                cout << j+1;
            }
            else{
                cout << ' ';
            }
        }

        for(int k=0; k<4;k++){
            if(k>=3-i){
                cout << 4-k;
            }
            else{
                cout << ' ';
            }
        }
        cout << endl;
    }
}