#include <stdio.h>
int main () {
    int num1,num2,num3,maxN;
    printf("Enter first number \n");
    scanf("%d",&num1);
    printf("Enter second number \n");
    scanf("%d",&num2);
    printf("Enter the third number \n");
    scanf("%d",&num3);
    if ((num1 > num2) && (num1 > num3)) {
     maxN = num1;         
    }
    else if ((num2 > num1) && (num2 > num3)) {
     maxN = num2;         
    }
    else if ((num3 > num1) && (num3 > num2)) {
        maxN = num3;
    }
    printf("The max number is %d", maxN);
    return 0;


}