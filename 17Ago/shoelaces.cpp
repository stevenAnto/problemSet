#include <iostream>
#include<string>
using namespace std;

int main(){
  unsigned int t;
  cin>>t;
  while(t--){
    int a,b,l,n;
    cin>>a>>b>>l>>n;
    cout<<2*l+2*(n-1)*b+2*a*(n-1)+a<<"\n";
  }
  return 0;
}
