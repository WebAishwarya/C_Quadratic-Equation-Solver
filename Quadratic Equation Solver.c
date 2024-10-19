#include<stdio.h>
#include<math.h>

int main()
{
    printf("Assignment 2 : Quadratic Equation Solver\n\n");
    printf("Task : Write a C program that takes coefficients a, b, and c as user input and calculates the roots of the quadratic equation.\n");
    
    int a, b, c;
    int x, x1, x2, x3;
    
    printf("\nEnter the coefficient a : ");
    scanf("%d", &a);
    
    printf("\nEnter the coefficient b : ");
    scanf("%d", &b);
    
    printf("\nEnter the coefficient c : ");
    scanf("%d", &c);
    
    printf("\nFinding the value of x1 : \n");
    
    x1 = (-b + sqrt((b*b) - 4 * a * c)) / (2 * a);
    printf("Value of x1 is : %d", x1);
    
    printf("\n\nFinding the value of x2 : \n");
    
    x2 = (-b - sqrt((b*b) - 4 * a * c)) / (2 * a);
    printf("Value of x2 is : %d\n\n", x2);
    
    x3 = a*(x1*x1) + b*(x2) + c; 
    printf("The Quadratic Equation is : %d", x3);
    
    return 0;
}
