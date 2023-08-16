#include <iostream>
#include<string>
#include<vector>
using namespace std;
int sumaRecursiva(int arr[],int n){
  if(n==0){
    return 0;
  }
  else{
    return arr[n-1]+ sumaRecursiva(arr,n-1);
  }
}
void findAllSumsContinuas(int arr[], int inicio, int fin, vector<int> v ){
  if(inicio>=fin){
    return;
  }
  int suma = 0;
  for(int i = inicio;i<fin; i++){
    suma += arr[i];
    cout<<suma<<"\n";
    v.push_back(suma);
  }

  findAllSumsContinuas(arr,inicio+1,fin,v);
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
  /*int n,q;
  cin>>n>>q;
  int arreglo[n];
  for(int i = 0;i<n; i++){
    //cout<<"entro for"<<i<<"\n";
    cin>>arreglo[i];
  }*/
  //mostrar(arreglo,n);
  int prueba[] = {1,2,3,4,5};
  vector <int> p;
  findAllSumsContinuas(prueba,0,5,p);
  mostrar(p);
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
