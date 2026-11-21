//Find the missing number from 1 to n;
//Brute
#include<bits/stdc++.h>
using namespace std;
int findMissing(const vector <int> &res, int n){
    for(int i=1; i<=n+1; i++){
        bool flag = false;
        for(int j=0; j<n; j++){
            if(res[j] == i){
                flag = true;
                break;
            }
        }
        if(!flag){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(auto &value: arr){
        cin >> value;
    }
    int missing = findMissing(arr,n);
    if(missing == -1){
        cout<<"There is noo missing element";
    }
    else{
        cout << "The missing element is " << missing<<endl;
    }
    return 0;
}
// tc --> O(n2) and auxillary sc is O(1)