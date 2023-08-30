#include <stdio.h>


float power(float base, int exponent){
    if(exponent == 0) return 1;
    return base * power(base, exponent - 1);
}

int main(){
    printf("%f", power(2.5, 4));
}