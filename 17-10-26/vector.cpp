#include<bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v;

    for(int i=0; i<=10;i++){
        v.push_back(i);
    }

    for(auto it=v.begin(); it!=v.end();it++){
        cout << *it <<endl;
    }

    for(int i=0; i<v.size() ; i++){
        cout << v[i];
    }
    cout << endl;
    cout << v.front() << endl << v.back() <<endl << v.size() << ' ' << v[v.size()-1]   << endl;
    v.pop_back();

    // cout << v.size() << ' '<< v[v.size()];
}