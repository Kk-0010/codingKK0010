#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){

        cin>>ar[i];
    }
    int s=0;
    int e=n-1;
    while (s<e)
    {
        if(ar[s]<0){
            s++;
        }
        else if (ar[e]>0)
        {
            e--;
        }
        else{
            swap(ar[s],ar[e]);
        }
        
    }
    for(int i=0; i<n;i++){
        cout<<ar[i]<<" ";
    }
    
}