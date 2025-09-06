//Q29: Write a program to calculate the factorial of a number.

#include<stdio.h>
int main(){
    int n;
    int product = 1;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        product *= i;
    }
    printf("The factorial of the number is : %d", product);
    return 0;
}