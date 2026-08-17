#include<bits/stdc++.h>

using namespace std;

int main(){
    queue<int> q;

    for(int i=0; i<10;i++){
        q.push(i);
    }
    cout << q.front() <<endl;
    cout << q.back() <<endl;
    cout << q.empty() <<endl;
    cout << q.size()<<endl;
    cout << "first elem" << q.front()<<endl;
    q.pop();
    cout << "first elem" << q.front()<<endl;
    cout << q.size()<<endl;
}