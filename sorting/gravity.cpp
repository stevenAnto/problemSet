#include <iostream>
#include<string>
#include<queue>
using namespace std;

int main(){
  int n;
  cin>>n;
  priority_queue<int> maxHeap;
  for(int i = 0;i<n; i++){
    int v;
    cin>>v;
    maxHeap.push(-v);
  }
  while(!maxHeap.empty()){
    cout<<-maxHeap.top()<<"\n";
    maxHeap.pop();
  }
  cout<<endl;
  return 0;
}
