#include <iostream>
#include<string>
#include<vector>
using namespace std;

void mostrarVector(vector<int> v){
  cout<<"\n";
  for(int i = 0;i<v.size(); i++){
    cout<<v[i]<<" ";
  }
  cout<<"\n";
}
void swapr(int &a,int &b){
  int temp=a;
  a=b;
  b=temp;
}
int partition(vector<int> &A,int p,int r){
  int x = A[r];
  int i=p-1;
  for(int j = p;j<r; j++){
    if(A[j]<=x){
      i++;
      swapr(A[i],A[j]);
    }
  }
  swapr(A[i+1],A[r]);
  return i+1;
}
void quickSort(vector<int>&A,int p,int r){
  if(p<r){
    int q= partition(A,p,r);
    quickSort(A,p,q-1);
    quickSort(A,q+1,r);
  }
}


int main(){

  int colum;
  cin>>colum;
  vector<int> h(colum);
  for(int i = 0;i<colum; i++){
    cin>>h[i];
  }
  //mostrarVector(h);
  quickSort(h,0,h.size()-1);
  mostrarVector(h);
  return 0;
}
