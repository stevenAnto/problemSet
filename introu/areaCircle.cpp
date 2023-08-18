#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
  double r;
  cin>>r;
  double pi=3.14159265358979323846;
  cout <<fixed<<setprecision(15)<<pi*r*r<<endl;
  return 0;
}
