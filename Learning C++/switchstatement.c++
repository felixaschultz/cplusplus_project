/* 
    Learning C++
    Switch Statement
 */
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

float operand_1, operand_2, result;
char operation;

int main(){
    cout << "Enter Operand 1: " << endl;
    cin << operand_1 << endl;
    cout << "Enter Operand 2: " << endl;
    cin << operand_2 << endl;
    cout << "Choose Operation:  + - * /" << endl;
    cin << operation << endl;

    // Switch goes here
    switch (operation){
        case "+":
            result = operand_1 + operand_2;
            break;
        case "-":
            result = operand_1 - operand_2;
            break;
        case "*":
            result = operand_1 * operand_2;
            break;
        case "/":
            result = operand_1 / operand_2;
            break;
        default:
            result = operand_1 + operand_2;
            break;
        }

    cout << "The result is " << result << endl;
    return(0)
}