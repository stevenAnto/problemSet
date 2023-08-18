#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Score {
  long long fullScore;
  long long partialScore;
};

bool compareFull(const Score& p1, const Score& p2) {
  // Ordenar en orden descendente según la diferencia entre la
  // puntuación completa y la puntuación parcial
  return p1.fullScore > p2.fullScore;
}
bool comparePar(const Score& p1, const Score& p2) {
  // Ordenar en orden descendente según la diferencia entre la
  // puntuación completa y la puntuación parcial
  return p1.partialScore > p2.partialScore;
}
void imprimirVectorScore(vector<Score> vector){
  for(Score p:vector){
    cout<<p.fullScore<<":"<<p.partialScore<<endl;
  }
  cout<<endl;

}

int main() {
  int N, K;
  cin >> N >> K;

  vector<Score> problems(N);

  //Mejor usar un for para indexar el vector
  for (int i = 0; i < N; i++) {
    cin >> problems[i].fullScore >> problems[i].partialScore;
  }
  vector<Score> copyVec(problems);
  //imprimirVectorScore(problems);

  // Ordenar los problemas en orden descendente según la diferencia
  // entre la puntuación completa y la puntuación parcial
  /*sort(problems.begin(), problems.end(), compareFull);
    imprimirVectorScore(problems);
    sort(copyVec.begin(), copyVec.end(), comparePar);
    imprimirVectorScore(copyVec);*/
  long long puntajeMAx=0;
  while(K>0){
    //comparar por primer puntaje
    sort(problems.begin(), problems.end(), compareFull);
    Score temp = problems[0];
    if(problems.size()==1){
      puntajeMAx += temp.fullScore;
      break;
    }
    //compara segundo puntaje
    sort(problems.begin(), problems.end(), comparePar);
    if((temp.fullScore>(problems[0].partialScore+problems[1].partialScore))&&
        K>1){
      puntajeMAx += temp.fullScore;
      sort(problems.begin(), problems.end(), compareFull);
      problems.erase(problems.begin());
      K-=2;
    }
    else{
      if(K>1){
        puntajeMAx +=(problems[0].partialScore+problems[1].partialScore);
        problems.erase(problems.begin());
        problems.erase(problems.begin());
        K-=2;
      }
      else{
        puntajeMAx += problems[0].partialScore;
        problems.erase(problems.begin());
        K--;
      }
    }
    cout<<"k"<<K<<endl;
    imprimirVectorScore(problems);
    cout<<"puntajeMAx"<<puntajeMAx<<endl;
  }
    cout<<"puntajeMAxTerminado"<<puntajeMAx<<endl;
    //cout<<puntajeMAx<<endl;

  return 0;
}
