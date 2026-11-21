//Find the missing number from 1 to n;
//Better - hash(2)
#include<bits/stdc++.h>
using namespace std;
void findMissingElement(const vector<int>& res, int n) {
    vector<int> hash(n + 2, 0);

    for (int i = 0; i < n; i++) {
        if (res[i] >= 1 && res[i] <= n + 1) {
            hash[res[i]]++;
        }
    }

    for (int i = 1; i <= n + 1; i++) {
        if (hash[i] == 0) {
            cout << "The missing element is " << i << '\n';
            return;
        }
    }

    cout << "There is no missing element\n";
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