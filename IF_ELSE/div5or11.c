#include <stdio.h>
int main (){
    int num;
    printf("Enter the number you want to check divisibility\n");
    scanf("%d",&num);
    if ((num % 5 == 0) && (num % 11 == 0)) {
        printf("%d is divisible by 5 and 11 \n",num);
    }
    else {
        printf("%d is not Divisible \n", num);
    }
    return 0;
}