#include <iostream>

void AddTwoNumbers();
void SubstractTwoNumbers();
void MultiplyTwoNumbers();
void DivideTwoNumbers();


int main(int argc, char** argv){
    char request_input;

    do {

    std::cout << "Please put an input (+ - * / , . to terminate): ";
    std::cin >> request_input;

    switch (request_input){
    case '+':
        AddTwoNumbers();
        break;
    case '-':
        SubstractTwoNumbers();
        break;
    case '*':
        MultiplyTwoNumbers();
        break;
    case '/':
        DivideTwoNumbers();
        break; 
    case '.':
        std::cout << "Quitting..";
        break;
    default:
        std::cout << "Wrong Input please try again:";
        break;} 
    }while(request_input != '.');


    return 0;
}

void AddTwoNumbers(){
    double num1, num2;

    std::cout << "Enter two numbers back to back: ";
    std::cin >> num1 >> num2;

    double result = num1 + num2;
    std::cout << "Result is: " << result << std::endl;
}

void SubstractTwoNumbers(){
    double num1, num2;
    std::cout << "Enter two numbers back to back: ";
    std::cin >> num1 >> num2;

    double result = num1 - num2;
    std::cout << "Result is: " << result << std::endl;
}

void MultiplyTwoNumbers(){
    double num1, num2;
    std::cout << "Enter two numbers back to back: ";
    std::cin >> num1 >> num2;

    double result = num1 * num2;
    std::cout << "Result is: " << result << std::endl;
}

void DivideTwoNumbers(){
    double num1, num2;
    std::cout << "Enter two numbers back to back: ";
    std::cin >> num1 >> num2;

    double result = num1 / num2;
    std::cout << "Result is: " << result << std::endl;
}