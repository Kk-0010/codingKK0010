#include<iostream>
using namespace std;

char getGrade(int marks){
    if(marks>=90){
        return 'A';
    }
    else if(marks>=80){
        return 'B';
    }
    else if(marks>=70){
        return 'c';
    }
    else{
        return 'F';
    }
}

int main(){

    int marks;
    cout<<"Enter your marks"<<" ";
    cin>>marks;
    
    
    char finalGrade=getGrade(marks);
    cout<<finalGrade<<endl;
}