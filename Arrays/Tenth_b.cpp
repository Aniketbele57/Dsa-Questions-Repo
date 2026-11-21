//Move all zeroes to the end of the array.--> optimal
//Trailing zeroes.
//Two pointer approach.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,0,5,2,0,4,0,3,4,0,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = -1;
    for (int j = 0; j < n; j++) {    //o(x)
        if (arr[j] == 0) {
            i = j;
            break;
        }
    }

    // Only run if at least one zero exists
    if (i != -1) {
        for (int j = i + 1; j < n; j++) {   //o(n-x)
            if (arr[j] != 0) {
                swap(arr[j], arr[i]);
                i++;
            }
        }
    }

    for(int i=0; i<n; i++){ //o(n)
        cout << arr[i] << " ";
    }
    return 0;
}