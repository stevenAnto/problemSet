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
int findQuery(int arr[], int inicio, int fin, int guardados [300][300] ){
  if(guardados[inicio][fin-1]!=0){
    cout<<"entro primer if\n";
    return guardados[inicio][fin-1];
  }
  int suma = 0;
  if(inicio>=fin) return 0;
  guardados[inicio][fin]=findQuery(arr,inicio+1,fin,guardados);
 /* for(int i = inicio;i<fin; i++){
    suma += arr[i];
    cout<<"inicio"<<inicio<<"fin"<<i<<endl;
    cout<<"suma "<<suma<<endl;
    guardados[inicio][i]=suma;
  }*/
  return guardados[inicio][fin];
//  return findQuery(arr,inicio+1,fin,guardados);
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
  int guardados [300][300]={0};
  while(q--){
  cout<<"entor whil for"<<endl;
    int l,r;
    cin>>l>>r;
    cout<<findQuery(arreglo,l,r,guardados)<<"\n";
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
