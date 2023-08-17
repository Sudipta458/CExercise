#include <stdio.h>
#include <ctype.h>

int main (){
    char input;
    printf("Enter the alphabet \n");
    scanf("%c",&input);
    input = tolower(input);

    int isVowel = 0;
    switch (input)
    {
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
     isVowel = 1;
    }

    // if(isVowel) printf("This is vowel");
    // else printf("This is consonant");
    printf("This is %s", (isVowel? "Vowel" : "Consonent"));
}