//Rotate the array by k place to the left.
// 1 2 3 4 5 l=2 3 4 5 1 2
#include<bits/stdc++.h>
using namespace std;
void rotateLeft(vector<int> &arr, int l){
    int n = arr.size();
    l = l % n;
    for(int i=0; i<l; i++){
        int temp = arr[0];
        for(int j=0; j<n-1; j++){  //o(n*(l%n)) ---> Tc
            arr[j] = arr[j+1];
        }
        arr[n-1] = temp;
    }
}
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    int left;
    cin >> left;
    rotateLeft(v, left);
    for(auto value: v){
        cout << value << " ";
    }
    return 0;
}