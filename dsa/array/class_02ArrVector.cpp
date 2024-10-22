#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin>>n;

    vector<int>arr;
    // int ans=(sizeof(arr)/sizeof(int));
    // cout<<ans<<endl;

    // insert
    arr.push_back(5);
    arr.push_back(8);

    // print
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 

    // remove
    arr.pop_back();

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}