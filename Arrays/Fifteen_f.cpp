// Find the missing number from 1 to n + 1
// Better - optimal
#include<bits/stdc++.h>
using namespace std;
int findMissing(const vector<int> &res, int n){
    int xor1 = 0,xor2 = 0;
    for(int i=0; i<n; i++){
        xor1 = xor1 ^ res[i];
        xor2 = xor2 ^ (i+1);
    }
    xor2 = xor2 ^ (n+1);
    return xor2 ^ xor1;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &value: arr){
        cin >> value;
    }
    int missing = findMissing(arr,n);
    cout << "The missing element is " << missing << endl;
    return 0;
}