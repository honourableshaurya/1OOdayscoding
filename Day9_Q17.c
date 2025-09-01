//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c, discriminant, root1, root2, realpart, imaginarypart;
    printf("Enter coefficients a, b, and c : ");
    scanf("%f %f %f", &a, &b, &c);
    if(a == 0){
        printf("This is not a quadratic equation (a cannot be 0)\n");
        return 0;
    }
    discriminant = b*b - 4*a*c;
    if(discriminant >= 0){                                  //D > 0
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct : \n");
        printf("Root 1 = %0.2f, Root 2 = %0.2f\n", root1, root2);
    }else if(discriminant == 0){                            //D = 0
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal :\n");
        printf("Root 1 = Root 2 = %0.2f", root1);
    }else{                                                  //D < 0
        realpart = -b / (2*a);
        imaginarypart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and imaginary :\n");
        printf("Root 1 = %0.2f + %0.2fi, Root 2 = %0.2f - %0.2fi ", realpart, imaginarypart, realpart, imaginarypart);
    }
    return 0;
}
