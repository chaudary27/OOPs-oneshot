#include <iostream>
using namespace std;

class MathOperations {
private:
    int num1, num2;

public:
    MathOperations(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
	void setValues(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    int add() {
        return num1 + num2;
    }

    int subtract() {
        return num1 - num2;
    }

    int multiply() {
        return num1 * num2;
    }

    int divide() {
        if (num2 == 0) return 0;
        return num1 / num2;
    }

    int modulus() {
        if (num2 == 0) return 0;
        return num1 % num2;
    }

    void displayResults() {
        cout << "Addition: " <<add()<<endl;
        cout << "Subtraction: " <<subtract()<<endl;
        cout << "Multiplication: " << multiply()<< endl;
        cout << "Division: " << divide()<<endl;
        cout << "Modulus: "<<modulus()<<endl;
    }
};
