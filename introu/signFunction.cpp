#include <iostream>
#include<string>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n<0) cout<<-1<<"\n";
    if(n>0) cout<<1<<"\n";
    if(n==0) cout<<0<<"\n";
  }

  return 0;
}
