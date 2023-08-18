#include <iostream>
#include<string>
using namespace std;

bool son_iguales(string a, string b){
  if(a.compare(b)==0) return true;
  int tam = a.length();
  int mitad = tam/2;
  string a1,b1,a2,b2;
  bool c1,c2;
  if(tam%2==0){
    a1  =strncpy(a1.c_str(),a.c_str(),tam/2);
    // (a1 b1)|| (a1 b2) && (a2 b1) ||(a2 b2)
    c1 = son_iguales(a1,b1)|| son_iguales(a1, b2)
    c2 = son_iguales(a2,b1)|| son_iguales(a1, b2)
    return son_iguales(mitad1,mitad2)
  }
  else{

  }
  return false;
}

int main(){
  return 0;
}
