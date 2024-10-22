#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;
    
    int s=0;
    int e=size-1;

    while (s<=e)
    {
        if(s==e){
            cout<<arr[s]<<" ";
        }
        else{
            cout<<arr[s]<<" ";
            cout<<arr[e]<<" ";
        }
        s++;
        e--;   
    }
    
}