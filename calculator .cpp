 // Codesoft Internship:-
        //Simple Calculator made by KALYANI SINGH.....

#include <iostream>
using namespace std;

int add(double num1, double num2) {
    return num1 + num2;
}

int subtract(double num1, double num2) {
    return num1 - num2;
}


int multiply(double num1, double num2) {
    return num1 * num2;
}


int divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
}

int main() {
    int number1, number2;
    char operation;

    cout << "*******Simple Calculator:-******"<<endl;
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    
    switch (operation) { //Switch Case operation for various Arithmetic Calculation
        case '+':
            cout <<"Addition of the given Numberis:\n\t\t"<< number1 << " + " << number2 << " = " << add(number1, number2) << endl;
            break;
        case '-':
            cout << number1 << " - " << number2 << " = " << subtract(number1, number2) << endl;
            break;
        case '*':
            cout << number1 << " * " << number2 << " = " << multiply(number1, number2) << endl;
            break;
        case '/':
            cout << number1 << " / " << number2 << " = " << divide(number1, number2) << endl;
            break;
        default:
            cout << "Error: Invalid operation." <<endl;
            break;
    }

    return 0;
}
