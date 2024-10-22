#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of Array = ";
    cin>>n;

    int s=0;
    int e=n-1;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    } 
    for(int i=0; i<n; i++){
    cout<<arr[i]<<"  ";
    }
}