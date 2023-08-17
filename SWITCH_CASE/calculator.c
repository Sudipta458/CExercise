#include <stdio.h>

int main(){
    float num1, num2;
    char operator;
    float result;

    scanf("%f %c %f",&num1, &operator, &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if(num2 == 0){
            printf("can't divide by 0");
            return 0;
        }
        result = num1 / num2;
        break;
    case '%':
        result = (int)num1 % (int)num2;
        break;
    default:
        printf("Wrong input");
        return 0;
        break;
    }

    printf("%f", result);
}