#include <bits/stdc++.h>
using namespace std;

// Returns {startIndex, endIndex} of the longest streak of 1s
pair<int, int> maxConsecutiveOnesTwoPointer(const vector<int>& arr) {
    int n = arr.size();
    int maxLen = 0;
    int bestStart = -1, bestEnd = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            int j = i;
            // Expand j as long as elements are 1
            while (j < n && arr[j] == 1) {
                j++;
            }

            int currentLen = j - i;
            if (currentLen > maxLen) {
                maxLen = currentLen;
                bestStart = i;
                bestEnd = j - 1; // j stopped at the first non-1 element
            }

            i = j; // Jump i directly to the non-1 element (for-loop will do i++)
        }
    }

    return {bestStart, bestEnd};
}

int main() {
    vector<int> arr = {5, 2, 1, 1, 8, 6, 4, 2, 1, 1, 1, 2, 1, 1};
    pair<int, int> range = maxConsecutiveOnesTwoPointer(arr);

    if (range.first == -1) {
        cout << "No 1s found in the array\n";
    } else {
        int count = range.second - range.first + 1;
        cout << "The maximum count of 1 is from index " << range.first
             << " to " << range.second << " with a count of " << count << '\n';
    }

    return 0;
}