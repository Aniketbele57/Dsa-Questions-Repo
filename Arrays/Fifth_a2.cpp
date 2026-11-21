//Rotate the array by k place to the Right.
// 1 2 3 4 5 r=2 4 5 1 2 3
#include<bits/stdc++.h>
using namespace std;
void rotateRight(vector<int> &arr, int r){
    int n = arr.size();
    r = r % n;
    for(int i=0; i<r; i++){
        int temp = arr[n-1];
        for(int j=0; j<n-1; j++){  //o(n*(r%n)) ---> Tc     j=n-1;j>0;j--
            arr[n-1-j] = arr[n-2-j];//                      arr[j] = arr[j-1]
        }
        arr[0] = temp;
    }
}
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    int right;
    cin >> right;
    rotateRight(v, right);
    for(auto value: v){
        cout << value << " ";
    }
    return 0;
}