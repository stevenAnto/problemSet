#include <iostream>
#include<string>
using namespace std;

unsigned int sumasGuardadas[10000000]={0};
unsigned int sumaQ(unsigned int arr[],int inicio, int fin, int n){
  if(sumasGuardadas[n*inicio+fin]!=0) return sumasGuardadas[n*inicio+fin];
  if(inicio>=fin) return arr[inicio];
  sumasGuardadas[n*inicio+fin]= arr[fin] + sumaQ(arr,inicio,fin-1,n);
  return sumasGuardadas[n*inicio+fin];
}

int main(){
  unsigned int n,q;
  cin>>n>>q;
  unsigned int numeros[n];
  for(int i = 0;i<n; i++){
    cin>>numeros[i];
  }
  while(q--){
    int l,r;
    cin>>l>>r;
    cout << sumaQ(numeros,l,r-1,n)<<"\n";
  }

  return 0;
}
