#include <stdio.h>

void reverse(int number){
    if(number == 0) return;
    printf("%d",number%10);
    reverse(number/10);
}

int main(){
    reverse(12345);
}