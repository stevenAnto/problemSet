#include <iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
int sumaRecursiva(int arr[],int n){
  if(n==0){
    return 0;
  }
  else{
    return arr[n-1]+ sumaRecursiva(arr,n-1);
  }
}
int findQuery(int arr[], int inicio, int fin, int guardados [3000], int n ){
  if(guardados[n*inicio+fin]!=0){
    cout<<"entro primer if\n";
    return arr[n*inicio+fin];
  }
  int suma = 0;
  for(int i = inicio;i<fin; i++){
    suma += arr[i];
    cout<<"suma"<<suma<<endl;
    guardados[n*inicio+i] =suma;
  }
  findQuery(arr,inicio+1,fin,guardados,n);
  cout<<"no entro a nda"<<endl;
    return arr[n*inicio+fin];
}


void mostrar(int v[], int n){
  for(int i = 0;i<n; i++){
    cout<<v[i]<<",";
  }
  cout<<"\n";
}
void mostrar(vector <int> v){
  for(int i = 0;i<v.size(); i++){
    cout<<v[i]<<",";
  }
  cout<<"\n";
}

int main(){
  int n,q;
  cin>>n>>q;
  int arreglo[n];
  for(int i = 0;i<n; i++){
    //cout<<"entro for"<<i<<"\n";
    cin>>arreglo[i];
  }
  mostrar(arreglo, n);
  cout<<"sali for"<<endl;
  int guardados[3000]={0};
  while(q--){
  cout<<"entor whil for"<<endl;
    int l,r;
    cin>>l>>r;
    findQuery(arreglo,l,r,guardados,n);
    mostrar(guardados,3000);
  }
  //mostrar(arreglo,n);
  //cout<<"entrara whil"<<endl;
  /*while(q--){
    int l,r;
    cin>>l>>r;
    int suma=0;
    for(int i=l;i<r;i++){
      suma += arreglo[i];
    }
    cout<<suma<<"\n";
  }*/
  return 0;
}
