//Find the number that appear once and rest twice.
//optimal - xor
#include<bits/stdc++.h>
using namespace std;
int OnlyOne(const vector<int>&arr, int n){
    int xor1 = arr[0];
    for(int i=1; i<n; i++){
        xor1 = xor1 ^ arr[i];
    }
    return xor1;
}
int main(){
    vector<int> arr = {1,3,4,5,6,5,4,1,3};
    int n = arr.size();
    int found = OnlyOne(arr,n);
    cout << "The number that appear once is " <<found << endl;
    return 0;
}