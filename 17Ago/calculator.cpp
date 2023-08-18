#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    int A, B;
    char op;
    sscanf(input.c_str(), "%d%c%d", &A, &op, &B);

    int result;
    if (op == '+') {
        result = A + B;
    } else if (op == '-') {
        result = A - B;
    } else if (op == '*') {
        result = A * B;
    } else if (op == '/') {
        result = A / B;
    }

    cout << result << endl;

    return 0;
}
