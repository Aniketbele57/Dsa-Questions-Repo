// remove duplicate from sorted array-brute
//using set
#include<bits/stdc++.h>
using namespace std;
vector<int> removeDuplicate(vector<int>res, int n){

    set<int> st;
    for(int i=0; i<n; i++){
        st.insert(res[i]);    //O(nlogn) && O(n)
    }

    vector<int>temp(st.size());
    int idx = 0;
    for(auto value: st){
        temp[idx] = value;    //O(n) && O(n)
        idx++;
    }
    // vector<int>temp();
    // for(auto value: st){
    //     temp.push_back(value);
    // }
    return temp;
}
int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(auto &value:arr){
        cin >> value;
    }

    vector <int> unique = removeDuplicate(arr,n); 
    for(auto value: unique){   //O(n)
        cout << value << " ";
    } 
    cout << endl;
    return 0;
}

//Tc --> O(nlogn + 2n) and Sc -->O(2n)