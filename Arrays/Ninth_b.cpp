#include <bits/stdc++.h>
using namespace std;

//Pass by const Reference (const vector<int>& arr): Passes the vector without copying its 
//elements in memory and guarantees the function won't accidentally modify the sorted array.
int binarySearch(const vector<int>& arr, int k) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k) {
            return mid; // Target found
        } 
        else if (arr[mid] < k) {
            low = mid + 1; // Discard left half
        } 
        else {
            high = mid - 1; // Discard right half
        }
    }

    return -1; // Target not found
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int k;
    cin >> k;

    int found = binarySearch(arr, k);
    if (found != -1) {
        cout << "The element is at index " << found << '\n';
    } else {
        cout << "Element not found\n";
    }

    return 0;
}