#include <iostream>
#include<string>
#include<deque>
using namespace std;

int main(){
  deque<int>j1;
  deque<int>j2;
  int n;
  cin>>n;
  int k1,k2;
  cin>>k1;
  while(k1--){
    //cout<<"registrando cartas de j1"<<endl;
    //cout<<"contador de k1 "<<k1<<endl;
    int k;
    cin>>k;
    j1.push_back(k);
  }
  cin>>k2;
  while(k2--){
    //cout<<"registrando cartas de j2"<<endl;
    //cout<<"contador de k2 "<<k2<<endl;
    int k;
    cin>>k;
    j2.push_back(k);
    //cout<<"salio del while"<<endl;
  }
  int contador=0;
  while(/*contador<20*/!j1.empty()&&!j2.empty()&&contador<100000){
    if(j1.front()>j2.front()){
      j1.push_back(j2.front());
      j2.pop_front();
      j1.push_back(j1.front());
      j1.pop_front();
      contador++;
      //cout<<"j1 "<<j1.front()<<"j2 "<<j2.front()<<endl;
    }
    else{
      j2.push_back(j1.front());
      j1.pop_front();
      j2.push_back(j2.front());
      j2.pop_front();
      contador++;
      //cout<<"j1 "<<j1.front()<<"j2 "<<j2.front()<<endl;
    }
  }
  if(contador>=100000){
  cout<<-1<<endl;
  return 0;
  }else{
  cout<<contador<<endl;
  if(j2.empty()) cout<<1<<endl;
  if(j1.empty()) cout<<2<<endl;
  }
  return 0;
}
