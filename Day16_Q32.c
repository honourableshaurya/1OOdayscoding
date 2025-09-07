//Q32: Write a program to check if a number is a palindrome.

#include<stdio.h>
int main(){
    int n, reverse = 0, remainder;
    printf("Enter a number : ");
    scanf("%d", &n);
    int original = n;
    while (n > 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    if(original == reverse){
        printf("Is palindrome : %d", original);
    }else{
        printf("It is not palindrome : %d", original);
    }
    return 0;
}