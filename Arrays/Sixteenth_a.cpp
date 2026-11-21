//Find the number that appear once and rest twice.
//brute -- O(n2)
#include<bits/stdc++.h>
using namespace std;
int Onenumber(int arr[], int n){
    for(int i=0; i<n; i++){
        int count =0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count ++;
            }
        }
        if(count == 1){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(auto &value: arr){
        cin >> value;
    }
    int missing = Onenumber(arr,n);
    cout << "The number which is only appearing once is " << arr[missing] << endl;
    return 0;
}