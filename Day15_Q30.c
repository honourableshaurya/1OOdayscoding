//Q30: Write a program to reverse a given number.

#include<stdio.h>
int main(){
    int n, reverse = 0;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    while(n != 0){
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10; 
    }
    printf("The reversed number number is : %d", reverse);
    return 0;
}