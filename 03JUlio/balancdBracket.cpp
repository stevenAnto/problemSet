#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    stack<char> pila;
    string s;
    cin >> s;
    bool balanced=true;
    for (char c : s) {
      if (c == '[' || c == '{' || c == '(') {
        pila.push(c);
      }
      else if (c == ']') {
        if (!pila.empty() && pila.top() == '[') {
          pila.pop();
        }
        else {
          balanced=false;
          break;
        }
      }
      else if (c == '}') {
        if (!pila.empty() && pila.top() == '{') {
          pila.pop();
        }
        else {
          balanced=false;
          break;
        }
      }
      else if (c == ')') {
        if (!pila.empty() && pila.top() == '(') {
          pila.pop();
        }
        else {
          balanced=false;
          break;
        }
      }
    }

    if (balanced&&pila.empty()) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
