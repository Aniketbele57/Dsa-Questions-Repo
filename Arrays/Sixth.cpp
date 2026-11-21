#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<end){   //O(n)
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    return 0;
    // reverse(a,a+n) //O(n);
}