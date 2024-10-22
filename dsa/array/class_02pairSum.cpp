#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr{10,20,40,60,70};
    // print all pair
    //outer loop will traverse for each element

    for(int i=0; i<arr.size(); i++){
        cout<<"We are at the element "<<arr[i]<<endl;
        int element=arr[i];

        //for every element, willTraverse on aage wale elements
        for(int j=i+1; j<arr.size(); j++){
            cout<<"pair "<<element<<" with"<<arr[i]<<endl;
        }
    }
}