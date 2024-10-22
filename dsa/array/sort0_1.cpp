#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>ar(n);
    
    for(int i=0;i<n; i++){

        cin>>ar[i];

    }
    int s=0;
    int e=n-1;
    int i=0;

    while(s<e){
    if(ar[i]==0){
        swap(ar[i],ar[s]);
        i++;
        s++;

    }
    if(ar[i==1]){
        swap(ar[i],ar[e]);
        e--;
        
    }
    }
    for(int i=0;i<n; i++){
        cout<<ar[i]<<" ";
    }
}

