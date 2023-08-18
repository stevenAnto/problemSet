#include <iostream>
#include<string>
using namespace std;

unsigned long long int f[100000];
unsigned long long  int fibonacci(int n){
  if(f[n]!=0){
    return f[n];
  }
  if(n==1) return 0;
  if(n==2||n==3) return 1;
  f[n]= fibonacci(n-1)+fibonacci(n-2);
  return f[n];
}

int main(){
  unsigned int n,i;
  unsigned long long int x=0,y=1,temp;
  cin>>n;
  cout<<fibonacci(n);
  return 0;
}
