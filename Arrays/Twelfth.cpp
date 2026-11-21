//Intersection of two sorted arrays.
//Brute
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {1,2,2,3,4,5,6,8,9};
    vector<int>b = {1,2,3,4,5,6,8,8};
    vector<int>res;
    int i=0,j=0;
    int n= a.size();
    int m = b.size();
    int min1 = min({n,m});
    int arr[min1] = {0};
    for(int i=0; i<min1; i++){
        for(int j=0; j<n; j++){
            if(a[i] == b[j] && arr[j]==0){
                res.push_back(a[i]);
                arr[j]=1;
                break;
            }    
        }
    }
    for(auto it: res){
        cout << it << " ";
    }
    return 0;
}