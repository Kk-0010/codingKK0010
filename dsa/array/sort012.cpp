#include<bits/stdc++.h>
using namespace std;

// void sort(int arr[]){

// }
int main(){
    int arr[]={0,1,0,2,0,1,2};
    sort(arr,arr+7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}