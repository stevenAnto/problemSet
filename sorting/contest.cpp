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
int main(){
  int m,n;
  cin>>m>>n;
  vector <estudiante> estudiantes;
  while(m--){
    estudiante e1;
    cin>>e1.name>>e1.team>>e1.score;
    //cout<<"e1.team "<<e1.team<<endl;
    estudiantes.push_back(e1);
  }

  //mostrar(estudiantes);
  //cout<<"vamos a ordenar"<<endl;
  sort(estudiantes.begin(), estudiantes.end(),compareEstudiantes);
  if(estudiantes[1].score==estudiantes[2].score){
    cout<<"?"<<endl;
  }
  else{
    cout<<estudiantes[0].name<<" "<<estudiantes[1].name<<endl;
  }
  //mostrar(estudiantes);
  sort(estudiantes.begin(), estudiantes.end(),compareEstudiantes2);
  if(estudiantes[1].score==estudiantes[2].score){
    cout<<"?"<<endl;
  }
  else{
    cout<<estudiantes[0].name<<" "<<estudiantes[1].name<<endl;
  }
  //mostrar(estudiantes);
  return 0;
}
