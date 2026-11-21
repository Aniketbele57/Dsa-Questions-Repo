//Find the missing number from 1 to n;
//Better - hash(3)
// Find the missing number from 1 to n + 1
// Better - unordered_map
#include <bits/stdc++.h>
using namespace std;

int findMissingElement(const vector<int>& res, int n) {
    unordered_map<int, int> mpp;

    // Store frequencies of all elements in the array
    for (int i = 0; i < n; i++) {
        mpp[res[i]]++;
    }

    // Check which number from 1 to n + 1 is absent
    for (int i = 1; i <= n + 1; i++) {
        if (mpp[i] == 0) { // Or: if (mpp.find(i) == mpp.end())
            return i;
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int missing = findMissingElement(arr, n);
    if (missing == -1) {
        cout << "There is no missing element\n";
    } else {
        cout << "The missing element is " << missing << '\n';
    }

    return 0;
}