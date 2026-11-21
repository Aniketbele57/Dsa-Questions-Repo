//Max consective one
#include<bits/stdc++.h>
using namespace std;
int maxConsecutiveOnes(vector<int> result){
    int n = result.size();
    int count=0,maxcount =0;
    for(int i=0; i<n; i++){
        if(result[i] == 1){
            count++;
            maxcount = max(count,maxcount);
        }
        else{
            count = 0;
        }
        
    }
    return maxcount;
}
int main(){
    vector<int> arr ={5,2,1,1,8,6,4,2,1,1,1,2,1,1};
    int maxi = maxConsecutiveOnes(arr);
    cout << maxi;
}