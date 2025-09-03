//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>
int main(){
    int num1, num2;
    int ans = 0;
    char op;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter operator ('+', '-', '*', '/', '%%') : ");
    scanf(" %c", &op);
    printf("Enter the second number : ");
    scanf("%d", &num2);
    switch(op){
        case '+' : ans = num1 + num2;
        printf("The sum is = %d", ans);
        break;
        case '-' : ans = num1 - num2;
        printf("The subtraction is = %d", ans);
        break;
        case '*' : ans = num1 * num2;
        printf("The multiplication is = %d", ans);
        break;
        case '/' :
        if(num2 !=0){ 
        ans = num1 / num2;
        printf("The division is = %d", ans);
        }else{
            printf("Error!, Division by zero not allowed.");
        }
        break;
        case '%' : 
        if(num2 != 0){
        ans = num1 % num2;
        printf("The mod of the equation is = %d", ans);
        }else{
            printf("Error!, mod with zero not allowed");
        }
        break;
        default : 
        printf("Invaltd input");
    }
    return 0;
}