//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main(){
    char a;
    printf("Enter a character : ");
    scanf("%c", &a);
    if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')){
            if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || 
               a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' ){
                printf("The entered character is vowel");
            }else{
            printf("The entered chararcter is consonant");
            }
    }else{
        printf("It is not a character");
    }
    return 0;
}
