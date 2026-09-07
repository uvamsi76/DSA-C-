#include<bits/stdc++.h>

using namespace std;

bool contans_dup(vector<int>& nums){
    set <int> s;

    for(int i=0; i<nums.size();i++){
        if(s.count(nums[i])>0){
            return true;
        }
        else{
            s.insert(nums[i]);
        }
    }
    return false;
}

int main(){
    vector<int> nums;

    int n;

    cin >> n;

    for(int i=0; i<n;i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }

    cout << contans_dup(nums);
}