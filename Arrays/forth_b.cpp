// remove duplicate from sorted array-optimal
// using two pointer approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &value: arr){
        cin >> value;
    }
    int i = 0;
    for(int j=1; j<n; j++){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    for(int j=0; j<i+1; j++){
        cout << arr[j] << " ";
    }
    cout << endl;
    return 0;
}