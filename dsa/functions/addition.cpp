#include<iostream>
using namespace std;
// function declare + define
int add(int a,int b){
    int result=a+b;
    return result;
}

int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
     
// Function Calling

    int sum=add(a,b);
    cout<<"Addition Result is " <<sum<<endl;
}