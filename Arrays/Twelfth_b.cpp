//intersection of two sorted arrays;
//optimal - two pointer approach;
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {1,2,2,3,4,5,6,8,9};
    vector<int>b = {1,2,3,4,5,6,8,8};
    vector<int>res;
    int i=0,j=0;
    int n= a.size();
    int m = b.size();
    while(i<n && j<m){
        if(a[i] == b[j]){
            res.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i] > b[j]){
            j++;
        }
        else{
            i++;
        }
    }
    for(auto value: res){
        cout << value << " ";
    }
    return 0;
}