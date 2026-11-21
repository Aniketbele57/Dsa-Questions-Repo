#include <bits/stdc++.h>
using namespace std;

pair<int, int> maxConsecutiveOnesIndex(const vector<int>& result) {
    int n = result.size();
    int count = 0, maxcount = 0, endIndex = -1;

    for (int i = 0; i < n; i++) {
        if (result[i] == 1) {
            count++;
            if (count > maxcount) {
                maxcount = count;
                endIndex = i;
            }
        } else {
            count = 0;
        }
    }

    return {endIndex, maxcount};
}

int main() {
    vector<int> arr = {5, 2, 1, 1, 8, 6, 4, 2, 1, 1, 1, 2, 1, 1};
    pair<int, int> duo = maxConsecutiveOnesIndex(arr);

    if (duo.second == 0) {
        cout << "No 1s found in the array\n";
    } else {
        int startIndex = duo.first - duo.second + 1;
        cout << "The maximum count of 1 is from index " << startIndex
             << " to " << duo.first << " with a count of " << duo.second << '\n';
    }

    return 0;
}