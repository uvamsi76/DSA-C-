#include<bits/stdc++.h>

using namespace std;
int main(){
    for(int i=0; i<4;i++){
        char a='A';
        for(int j=0;j<4;j++){
            if(j>=3-i){
                cout << char(a+j-3+i);
            }
            else{
                cout<<' ';
            }
        }
        for(int k=0;k<3;k++){
            if(k<i){
                cout << char(a+k);
            }
            else{
                cout << ' ';
            }
        }
        cout << endl;
    }
}