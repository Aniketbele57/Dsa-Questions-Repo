//Rotate array by k places to the left - better.
//STL approach
#include<bits/stdc++.h>
using namespace std;
void reverseRotateLeftarray(int arr[], int k, int n){
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);
}
void reverseRotateLeftvector(vector<int>arr, int k){
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int k;
    cin >> k;
    k = k % n;
    rotate(arr.begin(),arr.begin()+k,arr.end());  // vector
    //rotate(arr, arr+d, arr+n) //array 
    for(auto it: arr){
        cout << it << " ";
    }
    return 0;
}
