#include <iostream>
#include<string>
#include<vector>
#define MAX_INT ~(1<<31)

using namespace std;
void mostrarVector(vector<int> v){
  cout<<"\n";
  for(int i = 0;i<v.size(); i++){
    cout<<v[i]<<",";
  }
  cout<<"\n";
}

void merge(vector<int> &A,int p,int q,int r){
  cout<<"entromerge"<<p<<q<<r<<endl;
  int n1 = q-p+1;
  int n2 = r-q;
  vector<int> left(n1);
  vector<int> rigth(n2);
  cout<<"merge1"<<n1<<n2<<endl;
  for(int i = 0;i<n1; i++){
    //p=0
    left[i]=A[p+i];
  }
  mostrarVector(left);
  for(int i = 0;i<n2; i++){
    rigth[i]=A[q+i+1];
  }
  mostrarVector(rigth);
  left[n1] = MAX_INT;
  rigth[n2] = MAX_INT;
  int i=0;
  int j=0;
  for(int k = p;k<=r; k++){
    if(left[i]<=rigth[j]){
      A[k]=left[i];
      i++;
    }
    else{
      A[k]=rigth[j];
      j++;
    }
  }
  mostrarVector(A);

}

void mergeSort(vector<int> &A, int p, int r){
  if(p<r){
    int q=(p+r)/2;
    mergeSort(A,p,q);
    mergeSort(A,q+1,r);
    merge(A,p,q,r);
  }
}

int main(){
  vector<int> listNum={12,11,10,1,3,6,5,4};

  mostrarVector(listNum);
  mergeSort(listNum,0,listNum.size()-1);
  mostrarVector(listNum);
  return 0;
}
