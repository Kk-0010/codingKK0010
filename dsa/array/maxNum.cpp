#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
        
    }

    int maxi=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>maxi){
            //found a nuumber greater than maxi, Udate maxi
            maxi=arr[i];
        }
    }
    cout<<"Maximum number is "<<maxi<<endl;
}

