#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if(num2 != 0) {
        result = num1 / num2;
        cout << "Result: " << result << endl;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
    return 0;
}