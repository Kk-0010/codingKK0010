#include<bits/stdc++.h>
using namespace std;

bool findKey(int arr[], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]==key)
                return true;
            
        }
    }
    return false;
}

int main(){

    int rows=3;
    int cols=3;

    int arr[3][3];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
           cin>>arr[rows][cols];
            
        }
    }
    if(findKey(arr, 3, 3, key)){
        cout<<"true"<<" "<<endl;
    }
    else{
        cout<<"false"<<" "<<endl;
    }
}