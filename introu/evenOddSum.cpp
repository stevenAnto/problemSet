#include <iostream>
#include<string>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    int length = b-a+1;
    int primero;
    if(a%2==0){
      if(length%2==0){
        cout<<-(length/2)<<"\n";
      }
      else{
        int conteo = length/2;
        cout<<a+conteo<<endl;
      }

    }else{
      if(length%2==0){
        cout<<length/2<<"\n";
      }
      else{
        int conteo = length/2;
        cout<<-a-conteo<<endl;
      }
    }
  }
  return 0;
}
