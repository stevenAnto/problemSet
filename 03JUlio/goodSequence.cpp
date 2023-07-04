#include <iostream>
#include<string>
#include<map>
using namespace std;

int main(){
  int n;
  cin>>n;
  //cout<<typeid(n).name();
  map<int,int> contar;
  while(n--){
    int c;
    cin>>c;
    contar[c]++;

  }
  int contador=0;
  for(auto par: contar){
    if(par.second==par.first) ;
    else if(par.second>par.first){
      contador=contador+(par.second-par.first);
    }
    else{
      contador=contador +par.second;
    }
    /* cout<<par.first<<":"<<par.second<<endl;
       cout<<typeid(par.first).name()<<":"<<
       typeid(par.second).name()<<endl;*/
  }
    cout<<contador;
  return 0;
}
