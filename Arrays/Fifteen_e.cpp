// Find the missing number from 1 to n + 1
// Better - sum
#include <bits/stdc++.h>
using namespace std;

int missingFind(const vector<int> &res, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + res[i];
    }
    int sumi = (n+1)*((n+1) + 1)/2;
    return sumi - sum;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &value: arr){
        cin >> value;
    }
    int missing = missingFind(arr,n);
    cout << "The missing element is " << missing << endl;
    return 0;
}