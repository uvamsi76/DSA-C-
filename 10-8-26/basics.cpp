#include<bits/stdc++.h>
using namespace std;
int main() {
    
    cout << false;

    int a [10];
    for (int i=0;i<10;i++){
        cin >> a[i];
    }
    for (int i=0;i<10;i++){
        cout << "value of " << i << "element is " << a[i] << endl;
    }
    string s = "hello";
    
    string str = s;
    for(int i=0; i<s.length(); i++){
        s[i] = '2';
        cout << s[i] << endl;
    }

    if(s != str){
        cout << true;    
    }
    
}