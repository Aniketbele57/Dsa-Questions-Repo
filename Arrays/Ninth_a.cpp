//Binary search - recursive bs
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int low, int high, int k){   //O(logn) --> n->n/2->n/4->n/8.....
    int mid = low + (high-low)/2;
    if(low>high){
        return -1;
    }
    if(k == arr[mid]){
        return mid;
    }
    else if(k > arr[mid]){
        return binarySearch(arr,mid+1,high,k);
    }
    else{
        return binarySearch(arr,low,mid-1,k);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);  //O(nlogn)
    int k;
    cin >> k;

    int found = binarySearch(arr,0,n-1,k);
    cout << "The element is at index " << found << endl;
    return 0;
}