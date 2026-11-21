// linear Search
#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n, int k){
    for(int i=0;i<n;i++){       //O(n)
        if(arr[i] == k){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int search = linearSearch(arr,n,k);
    cout << "The element is at index " << search << endl;
    return 0;
}