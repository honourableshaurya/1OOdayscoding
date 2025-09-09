//Q36: Write a program to find the HCF (GCD) of two numbers.

#include<stdio.h>
int main(){
    int m, n, hcf = 0;
    printf("Enter two numbers : ");
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m && i <= n; i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            hcf = i;
        }
    }
    printf("HCF of %d and %d is : %d", m, n, hcf);
    return 0;
}