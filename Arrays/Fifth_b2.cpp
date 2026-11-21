//Rotate array by k places to the Right - better.
//Using STL approach.
#include<bits/stdc++.h>
using namespace std;
void reverseRotateRightarray(int arr[], int k, int n){
    reverse(arr, arr+n-k);
    reverse(arr+n-k, arr+n);
    reverse(arr, arr+n);
}
void reverseRotateRightvector(vector<int>arr, int k){
    reverse(arr.begin(), arr.end()-k);
    reverse(arr.end()-k, arr.end());
    reverse(arr.begin(), arr.end());
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int k;
    cin >> k;
    k = k % n;
    rotate(arr.begin(),arr.end()-k,arr.end());  // vector
    //rotate(arr, arr+n-k, arr+n) //array 
    for(auto it: arr){
        cout << it << " ";
    }
    return 0;
}
