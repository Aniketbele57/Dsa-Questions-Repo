// Second Largest Element and Second Smallest Element in The Array - Optimal
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    int min = INT_MAX;
    int smin = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]> max){
            smax = max;
            max = arr[i];
        }

        if(arr[i]>smax && arr[i]!=max){
            smax = arr[i];
        }
        if(arr[i] < min){
            smin = min;
            min = arr[i];
        }
        if(arr[i] < smin && arr[i]!= min){
            smin = arr[i];
        }
    }
    cout << "The largest element in array is " << max << endl;
    cout << "The Second largest element in array is " << smax << endl;
    cout << "The smallest element in array is " << min << endl;
    cout << "The Second smallest element in array is " << smin << endl;
    return 0;
}