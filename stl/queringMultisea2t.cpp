#include <iostream>
#include<string>
#include<queue>
using namespace std;

int main(){
  int q;
  cin>>q;
  priority_queue< long long int> minHeap;
  long long int sumas=0;
  while(q--){
    int p;
    long long int x;
    cin>>p;
    if(p==1){
      cin>>x;
      x = x+sumas;
      minHeap.push(-x);
      //cout<<"se agrego "<<-x<<endl;
    }
    if(p==2){
      cin>>x;
      sumas = sumas-x;
      //cout<<"valor de la sumas"<<sumas<<endl;
    }
    if(p==3){
      long long int botar = minHeap.top();
      botar = botar+sumas;
      cout<<-1*botar<<endl;
      minHeap.pop();
    }
  }
  return 0;
}
