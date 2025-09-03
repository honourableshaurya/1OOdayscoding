//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

#include<stdio.h>
int main(){
int unit;
float bill = 0;
printf("Enter electricity unit : ");
scanf("%d", &unit);
if(unit >= 1 && unit <= 100){
    bill = unit * 5;
    printf("Electricity bill = %0.2f Rs. \n", bill);
}else if(unit > 100 && unit <= 200){
    bill = unit * 10;
    printf("Electricity bill = %0.2f Rs. \n", bill);
}else if(unit > 200){
    bill = unit * 12;
    printf("Electricity bill = %0.2f Rs. \n", bill);
}else{
    printf("Invalid input\n");
}
return 0;
}