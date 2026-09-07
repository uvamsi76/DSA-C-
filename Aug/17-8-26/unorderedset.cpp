#include<bits/stdc++.h>

using namespace std;

int main(){
    unordered_set <int> s;

    for(int i=0; i<=10;i++){
        s.insert(i);
    }

    for(auto it=s.begin(); it!=s.end(); it++){
        cout << *it << endl;
    }
    if(s.find(2)!=s.end()){
        cout << "present"<< endl;
    }

    s.erase(s.begin());

    for(auto it=s.begin(); it!=s.end(); it++){
        cout << *it << endl;
    }

    cout << endl;

    cout << s.size() << endl;

    if(s.empty()){
        cout << "clean";
    }
    else{
        cout << "nahh";
    }
    cout <<endl;

    s.clear();

    if(s.empty()){
        cout << "clean";
    }
    else{
        cout << "nahh";
    }
    cout << endl << s.size()<<endl;


}