#include <iostream>
#include<string>
using namespace std;

int main(){
  int n;
  cin>>n;
  unsigned long long x = 0,y=1;
  if(n==1){
    cout<<x;
    return 0;
  }else if(n==2){
    cout<<x<<","<<y;
    return 0;
  }
  cout <<x<<","<<y<<",";
  for(int i = 0;i<n-2; i++){
    int aux=y;
    y=x+y;
    x=aux;
    cout<<y<<",";
  }
  return 0;
}
