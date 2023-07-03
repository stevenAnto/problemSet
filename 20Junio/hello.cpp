#include <iostream>
#include <string>

using namespace std;

int main(){
  int num;
  cin>>num;
  string nums = to_string(num);
  char numc= nums[nums.size()-2];
  cout<<numc<<endl;
  return 0;
}
