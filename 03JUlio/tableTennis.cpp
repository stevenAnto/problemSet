#include <iostream>
#include<string>
#include <queue>
#include<set>

using namespace std;

int main(){
  int n;
  long long k;
  cin >>n>>k;
  queue<int> fila;
  set<int> jugadores;
  while(n--){
    int c;
    cin>>c;
    fila.push(c);
    jugadores.insert(c);
  }
  /*while (!fila.empty()) {
    cout<<"entro impirmi fila"<<endl;
    cout << fila.front() << " ";
    fila.pop();
  }*/
  int j1,j2;
  j1=fila.front();
  fila.pop();
  j2=fila.front();
  fila.pop();
  long long contadorDeIf=0;
  long long totalGandosj1=0;
  long long totalGandosj2=0;
  long long whilec=0;
  int max;
  while(true){
    long pasadorContadr=contadorDeIf;
    //camcio a j2
    if(n>=k){
      cout<<*(--jugadores.end());
      break;
    }
    if(j1>j2){
      fila.push(j2);
      j2=fila.front();
      fila.pop();
      contadorDeIf++;
      max=j1;
    }
    //cambia a j1
    else{
      fila.push(j1);
      j1=fila.front();
      fila.pop();
      contadorDeIf--;
      max=j2;
    }
    if(contadorDeIf>pasadorContadr){
      totalGandosj1++;
      totalGandosj2=0;
    }
    else{
      totalGandosj1=0;
      totalGandosj2++;
    }
    if(totalGandosj2==k){
      cout<<j2;
      break;
      //cout<<"gano "<<j2;
    }
    if(totalGandosj1==k){
      cout<<j1;
      //cout<<"gano "<<j1;
      break;
    }
    if(whilec>n){
      cout<<max;
      break;
    }
    whilec++;
    //cout<<"totalGandosj1 :"<<totalGandosj1<<endl;
    //cout<<"totalGandosj2 :"<<totalGandosj2<<endl;
  }
  return 0;
}
