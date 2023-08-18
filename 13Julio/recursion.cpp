#include <iostream>
#include<string>
using namespace std;
int exponencial(int a, int n){
  if(n==0) return 1;
  if(n%2){
    q== exponencial(a,n/2);
    return q*q;
  }
  else{
    q=exponencial(a,n/2);
    return q*q*a;
  }
}

int main(){
  cout<<exponencial(2,3)<<endl;
  return 0;
}
