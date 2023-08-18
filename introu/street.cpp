#include <iostream>
#include<string>
#include <cmath>
using namespace std;
int llegarLinea(int i,int f){
  return abs((f-i)/2);
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    if(a%2==0&&b%2==0){
      cout<<llegarLinea(a,b)<<"\n";
    }
    else if(abs(b-a)==1){
      cout<<1<<"\n";
    }
    else if(a%2!=0&&b%2!=0){
      cout<<llegarLinea(a,b)<<"\n";
    }
    else if(a%2==0&&b%2!=0){
      b++;
      cout<<llegarLinea(a,b)<<"\n";
    }
    else if(b%2==0&&a%2!=0){
      b--;
      cout<<llegarLinea(a,b)<<"\n";

    }
  }
  return 0;
}
