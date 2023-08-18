#include <iostream>
#include<string>
#include<queue>
using namespace std;

int main(){
  int q;
  cin>>q;
  priority_queue< long long int> minHeap;
  priority_queue< long long int> minHeapAux;
  while(q--){
    int p;
    long long int x;
    cin>>p;
    if(p==1){
      cin>>x;
      x=-x;
      if(minHeap.empty()&&minHeapAux.empty()){
        minHeap.push(x);
        //cout<<"se agrego en la primera bolsa "<<endl;
      }
      else if(minHeap.empty()&&!minHeapAux.empty()){
        minHeapAux.push(x);
        //cout<<"se agrego en la segunda bolsa "<<x<<endl;
      }
      else if(!minHeap.empty()&&minHeapAux.empty()){
        minHeap.push(x);
        //cout<<"se agrego en la primera bolsa "<<x<<endl;
      }
    }
    if(p==2){
      cin>>x;
      x=-x;
      if(minHeap.empty()&&minHeapAux.empty()){
      }//no debe pasar
      else if(minHeap.empty()&&!minHeapAux.empty()){
        //cout<<" segundo esta llena"<<endl;
        while(!minHeapAux.empty()){
          long long int nuevoValor = minHeapAux.top()+x;
          minHeapAux.pop();
          minHeap.push(nuevoValor);
        }

      }
      else if(!minHeap.empty()&&minHeapAux.empty()){
        //cout<<" primera esta llena"<<endl;
        while(!minHeap.empty()){
          long long int nuevoValor = minHeap.top()+x;
          minHeap.pop();
          minHeapAux.push(nuevoValor);
        }
      }
    }
    if(p==3){
      if(minHeap.empty()&&minHeapAux.empty()){
      }
      else if(minHeap.empty()&&!minHeapAux.empty()){
        cout<<-1*minHeapAux.top()<<endl;
        minHeapAux.pop();
      }
      else if(!minHeap.empty()&&minHeapAux.empty()){
        cout<<-1*minHeap.top()<<endl;
        minHeap.pop();
      }
      //cout<<"entro a 3 y se sacara "<<minHeap.top()<<endl;
      //cout<<"se saco al menor"<<endl;
    }
  }
  return 0;
}
