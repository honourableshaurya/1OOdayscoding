//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include<stdio.h>
int main(){
    int n, binary = 0, place = 1, remainder;
    printf("Enter number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        remainder = n % 2;
        binary += remainder * place;
        place *= 10;
        n /= 2;
    }
    printf("Binary representation of given number is : %d\n", binary);
    return 0;
}