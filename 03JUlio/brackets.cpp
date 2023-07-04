#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	int n;
	string caso;
	stack<char> pila;
	char matchingBracket;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> caso;
		for(int j = 0; j < caso.length(); j++) {
			if(caso[j] == '[' || caso[j] == '{' || caso[j] == '(') {
				pila.push(caso[j]);
			}
			else {
				matchingBracket = pila.top() == '[' ? ']' : pila.top() =='{' ? '}' : ')';
				if(caso[j] != matchingBracket) {
					break;
				}
				else {
					pila.pop();
				}
			}
		}
		if(pila.empty()) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
