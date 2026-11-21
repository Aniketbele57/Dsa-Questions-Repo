#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int k;
    cin >> k;

    int index = -1;
    auto it = lower_bound(arr.begin(), arr.end(), k);
    if (it != arr.end() && *it == k) {
        index = it - arr.begin();
    }
    cout << "The element is at index " << index << endl;
    return 0;
}

