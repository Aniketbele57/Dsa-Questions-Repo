//Move all zeroes to the end of the array.--> better
//Trailing zeroes.
#include<bits/stdc++.h>
using namespace std;

void Moveallzeroestotheend(int arr[], int n){
    vector<int>store;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            store.push_back(arr[i]);
        }
    }
    int m = store.size();
    for(int i=0; i<m; i++){  //o(m)
        arr[i] = store[i];
    }
    for(int i=m; i<n; i++){ //o(n-m)
        arr[i] = 0;
    }
}

int main(){
    int arr[] = {1,8,6,7,0,2,0,1,4,0,1,4,8,0,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    Moveallzeroestotheend(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

//tc --> O(n) and SC --> O(n)