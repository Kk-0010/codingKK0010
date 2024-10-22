#include<iostream>
using namespace std;

int findMax(int x,int y,int z)
{
    if(x>y && x>z){
        return x;
    }
    else if(y>x && y>z){
        return y;
    }
    else{
        return z;
    }
}

int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    int maximumNumber=findMax(a,b,c);
    cout<<maximumNumber<<endl;
}