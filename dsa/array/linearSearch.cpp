#include<iostream>
using namespace  std;

bool find(int ar[], int size, int key){

    //linear search
    for(int i=0; i<size; i++){
        if(ar[i]==key)
        return true;
    }
    //not present
    return false;
}

int main(){

    int ar[5]={1,3,5,7,8};
    int size=5;

    cout<<"Enter the key to find"<<endl;
    int key;
    cin>>key;

    if(find(ar, size, key)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}