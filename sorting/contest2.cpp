#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct estudiante{
  string name;
  int team;
  int score;
  bool operator<(const estudiante& other){
    return score>other.score;
  }
};
void mostrar(vector<estudiante> v){
  for(auto e : v){
    cout<<e.name<<",";
  }
  cout<<endl;
}
void insertionSort(vector<int>& arr) {
  int n = arr.size();
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = key;
  }
}
bool compareEstudiantes(const estudiante& a, const estudiante& b) {
  // Primero ordenar por team, si los teams son iguales, ordenar por score
  if (a.team != b.team) {
    return a.team < b.team;
  }
  return a.score > b.score;
}
bool compareEstudiantes2(const estudiante& a, const estudiante& b) {
  // Primero ordenar por team, si los teams son iguales, ordenar por score
  if (a.team != b.team) {
    return a.team > b.team;
  }
  return a.score > b.score;
}
void mostrarBidi(vector<estudiante> v [],int m){
  for(int i = 0;i<m; i++){
    for(auto elemento: v[i]){
      cout<<elemento.name<<",";
    }
    cout<<"\n";
  }
  cout<<"\n";
}
int main(){
  int m,n;
  cin>>n>>m;
  //cout<<"tenemos "<<n <<"estudiantes"<<" y "<<m<<" regiones"<<endl;
  vector<estudiante> regiones[m];
  while(n--){
    estudiante e1;
    cin>>e1.name>>e1.team>>e1.score;
    regiones[e1.team-1].push_back(e1);
  }
  //mostrarBidi(regiones,m);
  for(int i = 0;i<m; i++){
    sort(regiones[i].begin(),regiones[i].end());
    //cout<<"team "<<i+1;
    /*if(regiones[i].size()>2){
      cout<<"que estudiante "<<regiones[i][2].score<<endl;
    }*/
    //acceso a un indice que no existe, lo hace sin enviar error
    if(regiones[i][1].score==regiones[i][2].score && regiones[i].size()>2){
      cout<<"?"<<endl;
    }
    else{
      cout<<regiones[i][0].name<<" "<<regiones[i][1].name<<endl;
    }
  }
  return 0;
}
