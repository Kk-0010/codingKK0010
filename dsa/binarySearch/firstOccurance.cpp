#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> arr, int target){
    int ans=-1;
    int s=0;
    int e=arr.size()-1;
    int mid = (s+e)/2;
    while(s<=e){
        if(target==arr[mid]){
            ans=mid;
            e=mid-1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }


}
int lastOccurence(vector<int> arr, int target){
    int ans=-1;
    int s=0;
    int e=arr.size()-1;
    int mid = (s+e)/2;
    while(s<=e){
        if(target==arr[mid]){
            ans=mid;
            s=mid+1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }


}
int main(){
    vector<int> arr{1,2,3,4,4,4,4,5,6,7,8};
    int target = 4;
    int ans = firstOccurence(arr, target);
    int ans1 = lastOccurence(arr, target);
    cout<<"First Occurence is at index : "<<ans1;
}