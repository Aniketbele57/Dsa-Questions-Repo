//Find the number that appear once and rest twice.
//better - hash(1)
#include<bits/stdc++.h>
using namespace std;
int OnlyOne(const vector<int>&arr, int n){
    unordered_map<int, int>hash;
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }
    for(auto value: hash){
        if(value.second == 1){
            return value.first;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1,3,4,5,6,5,4,1,3};
    int n = arr.size();
    int found = OnlyOne(arr,n);
    cout << "The number that appear once is " <<found << endl;
    return 0;
}