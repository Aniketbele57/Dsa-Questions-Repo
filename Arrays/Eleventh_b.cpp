//Union of two sorted arrays;
//optimal - two pointer approach;
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {1,2,2,3,4,5,6,8,9};
    vector<int>b = {1,2,3,4,5,6,8,8};
    vector<int>Union;
    int i=0,j=0;
    int n= a.size();
    int m = b.size();
    while(i<n && j<m){
        if(a[i]<=b[j]){
            if(Union.size()==0 || Union.back()!=a[i]){
                Union.push_back(a[i]);
            }
            i++;
        }
        else{
           if(Union.size()==0 || Union.back()!=b[j]){
                Union.push_back(b[j]);
            }
            j++; 
        }
    }
    while(i < n){
        if(Union.back()!=a[i]){
            Union.push_back(a[i]);
        }
        i++;
    }
    while(j < m){
        if(Union.back()!=b[j]){
            Union.push_back(b[j]);
        }
        j++;
    }
    for(auto val: Union){
        cout << val << " ";
    }
    return 0;
}
//Tc --> O(n+m) and Sc --> O(n+m)
//"The auxiliary space is $O(1)$ because we only use two pointers,
// and the space to return the answer is $O(n + m)$ in the worst case."