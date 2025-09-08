//Q33: Write a program to check if a number is an Armstrong number.

#include<stdio.h>
int main(){
    int n, sum = 0, r, original;
    printf("Enter a number : ");
    scanf("%d", &n);
    original = n;
    while (n > 0){
        r = n % 10;
        sum = sum + (r*r*r);
        n = n / 10; 
    }
    if(original == sum){
        printf("It is an armstrong number : %d", original);
    }else{
        printf("It is not an armstrong number : ");
    }
    return 0;
}