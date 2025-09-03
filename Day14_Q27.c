//Q27: Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int o = (2 * i) - 1;
        printf("%d\n", o);
        sum += o; 
    }
    printf("The sum of odd numbers are %d", sum);
    return 0;
}