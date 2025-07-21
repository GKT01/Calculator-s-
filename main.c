#include <stdio.h>

void AddTwoNumbers();
void SubstractTwoNumbers();
void MultiplyTwoNumbers();
void DivideTwoNumbers();

int main(int argc, char *argv[]){

    char request_input;
    do {

    printf("Please put an input (+ - * / , . to terminate) : ");
    scanf(" %c", &request_input);

    switch (request_input){
    case '+':
        AddTwoNumbers();
        continue;
    case '-':
        SubstractTwoNumbers();
        continue;
    case '*':
        MultiplyTwoNumbers();
        continue;
    case '/':
        DivideTwoNumbers();
        continue; 
    case '.':
        break;
    default:
        printf("Wrong Input please try again:");
        continue;} 
    }while(request_input != '.');

    



    return 0;
}

void AddTwoNumbers(){
    double num1, num2;
    printf("Enter two numbers back to back: ");
    scanf("%lf %lf", &num1, &num2);

    double result = num1 + num2;
    printf("Result is: %.3f\n", result );
}

void SubstractTwoNumbers(){
    double num1, num2;
    printf("Enter two numbers back to back: ");
    scanf("%lf %lf", &num1, &num2);

    double result = num1 - num2;
    printf("Result is: %.3f\n", result );
}

void MultiplyTwoNumbers(){
    double num1, num2;
    printf("Enter two numbers back to back: ");
    scanf("%lf %lf", &num1, &num2);

    double result = num1 * num2;
    printf("Result is: %.3f\n", result );
}

void DivideTwoNumbers(){
    double num1, num2;
    printf("Enter two numbers back to back: ");
    scanf("%lf %lf", &num1, &num2);

    double result = num1 / num2;
    printf("Result is: %.3f\n", result );
}