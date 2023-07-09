#include <iostream>
#include<string>
#include <queue>
using namespace std;


int combinar(int g1, int g2){
  static int count=0;
  count++;
  return 1*g1+2*g2;
}


int main(){
  priority_queue<int> galletas;
  int n,k,g;
  cin>>n>>k;
  while(n--){
    cin>>g;
    //cout<<"k"<<g<<endl;
    galletas.push(-1*g);
  }
  int contador=0;
  while(-1*galletas.top()<k){
    if(galletas.size()<2){
      contador=-1;
      break;
    }
    int nuevo,g1,g2;
    g1=galletas.top();
    galletas.pop();
    g2 = galletas.top();
    galletas.pop();
    nuevo = combinar(-1*g1,-1*g2);
    //cout<<"nuevo "<<nuevo<<endl;
    galletas.push(-1*nuevo);
    contador++;
    //cout<<galletas.top();
    //cout<<"se combinaran "<<g1<<","<<g2<<endl;
  }
  cout<<contador<<endl;
  return 0;
}
