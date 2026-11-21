//Union of twp sorted arrays;
//brute
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {1,8,2,3,6,5,2,4,9};
    vector<int>b = {1,8,3,2,4,5,6,8};
    set<int>store;
    for(int i=0; i<a.size(); i++){
        store.insert(a[i]);         //O(n1log(n1))
    }
    for(int i=0; i<b.size(); i++){
        store.insert(b[i]);         //O(n2log(n2))
    }
    vector<int>Union;
    for(auto value: store){         //O(n1+n2-n) where n is common elements
        Union.push_back(value);
    }
    for(auto it: Union){
        cout << it << " ";
    }
}
//Tc --> O(n1+n2-n) and Sc --> O(2(n1+n2))