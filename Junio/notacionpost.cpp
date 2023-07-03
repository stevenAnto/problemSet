#include <iostream>
#include<string>
#include <stack>
using namespace std;

int main(){
  stack<int> pila;
  int n;
  cin>>n;
  string texto[n];
  /*for(int i = 0;i<n; i++){
    cout<<"entro"<<endl;
    cin>>texto[i];
    cout<<texto[i];
  }*/
  while(n--){
    string c;
    cin >>c;
    int t,r,w;
    if(c=="+"){
      r=pila.top();
      pila.pop();
      w=pila.top();
      pila.pop();
      t=r+w;
      pila.push(t);
    }
    else if(c=="-"){
      r=pila.top();
      pila.pop();
      w=pila.top();
      pila.pop();
      t=w-r;
      pila.push(t);
    }
    else if(c=="*"){
      r=pila.top();
      pila.pop();
      w=pila.top();
      pila.pop();
      t=r*w;
      pila.push(t);
    }
    else if(c=="/"){
      r=pila.top();
      pila.pop();
      w=pila.top();
      pila.pop();
      t=w/r;
      pila.push(t);
    }
    else{
      pila.push(stoi(c));
    }
    //cout<<"quien esta top"<<pila.top()<<endl;
  }
  cout<<pila.top();
  return 0;
}
