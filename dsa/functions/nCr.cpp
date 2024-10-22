#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;

  for(int i=0; i<=n; i++){
      fact=fact*i;
  }
  return fact;
 
}
int nCr(int n, int r){
    int num = fact(n);
    int denom = fact(r)*fact(n-r);

    return(num/denom);
}

int main(){
    int n,r;
    


    return 0;
}