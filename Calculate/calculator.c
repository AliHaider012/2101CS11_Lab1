#include <stdio.h>

void addition(double a, double b){
    double added = a + b;
    printf("\n%lf ", added);
}

void subtraction(double a, double b){
    double subtracted = a - b;
    printf("\n%lf ", subtracted);
}

void multiplication(double a, double b){
    double multiplied = a * b;
    printf("\n%lf ", multiplied);
}

void division(double a, double b){
    if (b==0) printf("\ninvalid");
    else{
        double divided = a / b;
        printf("\n%lf ", divided);
    }
}

int main(void){
    int s;
    printf("\nType:\n1: addition\n2: substraction\n3: multiplication\n4: division");
    scanf("%d", &s);

    double a, b;
    printf("\nEnter first number: ");
    scanf("%lf", &a);
    printf("\nEnter second number: ");
    scanf("%lf", &b);

    switch(s){
        case 1:
        addition(a, b);
        break;
        case 2:
        subtraction(a, b);
        break;
        case 3:
        multiplication(a, b);
        break;
        case 4:
        division(a, b);
        break;
    }

    return 0;
}