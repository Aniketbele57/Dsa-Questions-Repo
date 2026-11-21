//First Largest Element In The Array. - brute
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 8, 9, 2, 8, 20, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    //Selection sort
    for(int i=0; i<n-1; i++){           //O(n2)
        int minindex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minindex]){
                minindex = j;
            }
        }
        if(i!=minindex){
            swap(arr[i],arr[minindex]);
        }
    }
    int max = arr[n-1];
    cout << "The Largest element in the array is " << max << endl;
    return 0;

}