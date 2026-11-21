//Find the missing number from 1 to n;
//Better - hash(1)
#include<bits/stdc++.h>
using namespace std;
void findMissingElement(const vector<int> &res, int n){
    int hash[n+2] = {0};
    for(int i=0; i<n; i++){
        hash[res[i]]++;
    }
    for(int i=1; i<=n+1; i++){
        if(hash[i]!=1){
            cout << "The missing element is " << i;
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    findMissingElement(arr,n);
    return 0;
}
//tc --> o(n) and aux sc --> O(n);