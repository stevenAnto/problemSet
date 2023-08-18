#include <iostream>
#include<string>
#include<queue>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  priority_queue<int> maxHeapA;
  priority_queue<int> maxHeapB;
  while(n--){
    int a,b;
    cin>>a>>b;
    maxHeapA.push(a);
    maxHeapB.push(b);
  }
  //para los primeros 2 mi
  int respuesta=0;
  while(k>0){
    int superior=maxHeapB.top();
    maxHeapB.pop();
    int casisuperior=maxHeapB.top();
    if((maxHeapA.top()>(superior+casisuperior))
        &&k>1){
      respuesta+=maxHeapA.top();
      maxHeapA.pop();
      maxHeapB.push(superior);
      k -=2;
    }
    else{
      if(k>1){
        respuesta +=(superior+casisuperior);
        maxHeapB.pop();
        k-=2;
      }
      else{
        respuesta += superior;
        k--;
      }
    }
    cout<<"k"<<k;
    cout<<"atop"<<maxHeapA.top();
    cout<<"btop"<<maxHeapB.top();
    cout<<"respuesta"<<respuesta<<endl;
  }
  return 0;
}
