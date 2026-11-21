#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        if(arr[i+1]<arr[i]){  //it will also consider the same elements too.[1,2,2,3]
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &value: arr){  //for input --> the value will be reference not a plain copy.
        cin >> value;
    }
    bool flag = check(arr);
    if(flag){
        cout << "The array is sorted.";
    }
    else{
        cout << "The array is not sorted.";
    }
    cout << endl;

    bool flag_stl = is_sorted(arr.begin(),arr.end());
    
    if(flag_stl){
        cout << "The array is sorted.";
    }
    else{
        cout << "The array is not sorted.";
    }
    return 0;
}