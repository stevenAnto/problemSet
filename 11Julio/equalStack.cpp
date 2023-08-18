#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void imprimir(vector<int> a){
  for(int i = 0;i<a.size(); i++){
    cout<<a[i];
  }
  cout<<"\n";
}

int maxI(int n1,int n2,int n3){
  //if(n1==n2==n3) return 0;
  if(n1==n2&&n1==n3)return 0;
  int m= max(n1,n2);
  m=max(m,n3);
  if(m==n1) return 1;
  if(m==n2) return 2;
  return 3;
}

int main(){
  int n1,n2,n3;
  cin>>n1>>n2>>n3;
  vector <int> s1;
  vector <int> s2;
  vector <int> s3;
  while(n1--){
    int c;
    cin>>c;
    s1.push_back(c);
  }
  while(n2--){
    int c;
    cin>>c;
    s2.push_back(c);
  }
  while(n3--){
    int c;
    cin>>c;
    s3.push_back(c);
  }
  int fa=0;
  vector <int> s11;
  vector <int> s22;
  vector <int> s33;
  while(!s1.empty()){
    fa+=s1.back();
    s1.pop_back();
    s11.push_back(fa);
  }
  /*while(!s11.empty()){
    cout<<s11.back();
    s11.pop_back();
    }*/
  fa=0;
  //cout<<"\n";
  while(!s2.empty()){
    fa+=s2.back();
    s2.pop_back();
    s22.push_back(fa);
  }
  /*while(!s22.empty()){
    cout<<s22.back();
    s22.pop_back();
    }*/
  fa=0;
  //cout<<"\n";
  while(!s3.empty()){
    fa+=s3.back();
    s3.pop_back();
    s33.push_back(fa);
  }
  /*while(!s33.empty()){
    cout<<s33.back();
    s33.pop_back();
    }*/
  imprimir(s11);
    imprimir(s22);
    imprimir(s33);
  int contador=0;
  while(true){
    int maxIndice = maxI(s11.back(),s22.back(),s33.back());
    //cout<<"maxIndice "<<maxIndice<<endl;
    if(maxIndice==1){
      s11.pop_back();
      contador++;
    }
    else if(maxIndice==2){
      s22.pop_back();
      contador++;
    }
    else if(maxIndice==3){
      s33.pop_back();

      contador++;
    }
    else{
      cout<<s11.back();
      break;
    }
    imprimir(s11);
    imprimir(s22);
    imprimir(s33);
    cout<<"\n";
    //cout<<"contador"<<contador<<endl;
  }
  //cout<<" cuantos se sacaron "<<contador<<endl;
  //cout<<contador;


  return 0;
}
