// Second Largest Element and Second Smallest Element in The Array - better
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 9, 8, 7, 0, 6, 8, 5, 2, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    int min = arr[0], max = arr[n-1];
    int smin = INT_MAX;
    int smax = INT_MIN;
    for(int i=1; i<n; i++){
        if(arr[i]!=min){
            smin = arr[i];
            break;
        }
    }

    for(int i=n-2; i>=0; i++){
        if(arr[i]!=max){
            smax = arr[i];
            break;
        }
    }
    cout << "The largest element in array is " << max << endl;
    cout << "The Second largest element in array is " << smax << endl;
    cout << "The smallest element in array is " << min << endl;
    cout << "The Second smallest element in array is " << smin << endl;
    return 0;
}