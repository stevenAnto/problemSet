#include <iostream>
#include<string>
using namespace std;

int main(){
  unsigned int t;
  cin>>t;
  while(t--){
    unsigned int n;
    cin>>n;
    if(n%2==0) cout<<n+2<<"\n";
    else cout<<n+1<<"\n";
  }
  return 0;
}
