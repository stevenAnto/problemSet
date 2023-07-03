#include <iostream>
#include<string>
using namespace std;

int main(){
  int t,a,b,n;
  cin>>t;
  while(t--){
    cin>>a>>b>>n;
    int costoDolar=a*n+(b*n/100);
    int costoCentavos = b*n%100;
    cout<<costoDolar<<" "<<costoCentavos<<endl;

  }
  return 0;
}
