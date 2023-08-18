#include <iostream>
#include<string>
using namespace std;

void moveSingleDisk(char start, char finish) {
  cout << "Move from "<<start <<" to "<< finish <<"."<<endl;
}
void moveTower(int n, char start, char finish, char tmp) {
  if (n == 1) {
    moveSingleDisk(start, finish);
  } else {
    moveTower(n - 1, start, tmp, finish);
    moveSingleDisk(start, finish);
    moveTower(n - 1, tmp, finish, start);
  }
}


int main(){
  int n;
  cin>>n;
  while(n--){
    int discos;
    char start;
    char finish;
    char temp;
    cin>>discos>>start>>finish;
    if((start=='A')&&(finish=='B')) temp='C';
    if((start=='B')&&(finish=='A')) temp='C';
    if((start=='A')&&(finish=='C')) temp='B';
    if((start=='C')&&(finish=='A')) temp='B';
    if((start=='B')&&(finish=='C')) temp='A';
    if((start=='C')&&(finish=='B')) temp='A';
    moveTower(discos,start,finish,temp);
    cout<<"Done!"<<endl;

  }
  return 0;
}
