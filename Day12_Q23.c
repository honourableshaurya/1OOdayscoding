//Q23: Write a program to calculate library fine based on late days as follows: 
/*First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

#include<stdio.h>
int main(){
    int days;
    float fine = 0;
    printf("Enter late fine days :");
    scanf("%d", &days);
    if(days == 0){
        printf("No fine");
    }else if(days >= 1 && days <= 5){
        fine = days * 2;
        printf("Fine = %0.2f Rs.\n", fine);
    }else if(days > 5 && days <= 10){
        fine = days * 4;
        printf("Fine = %0.2f Rs.\n", fine);
    }else if(days >= 11 && days <= 30){
        fine = days * 6;
        printf("Fine = %0.2f Rs.\n", fine);
    }else if(days > 30){
        printf("Membership cancelled");
    }else{
        printf("Invalid input");
    }
    return 0;
}