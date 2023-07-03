#include <iostream>
#include<string>
#include <cmath>
using namespace std;

int main(){
   int t;
   int a,b;
   int pos1, pos2;
   while(t--){
     cin >> a>> b;
     pos1= ceil((float)a/2);
     pos2=ceil((float)b/2);
     if(pos1 == pos2 && a!=b){
       cout<<1<<endl;
     }
     else{
       cout<<abs(pos1-pos2)<<endl;
     }

   }
  return 0;
}
