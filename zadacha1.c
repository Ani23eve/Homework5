#include <stdio.h>
#include <math.h>

void multiplication(double, double, double*);
void plus(double, double, double*);
void division(double, double, double*);
void subtraction(double, double, double*);



int main(){
    double a, b, result;
    char operotor;
    
    
    while(scanf("%lf %c %lf", &a, &operotor, &b)!=EOF){
        
        // a b c
        // printf("%lf, %c, %lf", a, operotor, b);
        if(operotor=='*'){
            multiplication(a,b, &result);
            printf("a * b=%.2lf\n", result);
        }
        if(operotor=='+'){
            plus(a,b, &result);
            printf("a+b=%.2lf\n", result);
        }
        if(operotor=='/'){
            division(a,b, &result);
            printf("a/b=%.2lf\n", result);
        }
        if(operotor=='-'){
            subtraction(a,b, &result);
            printf("a-b=%.2lf\n", result);
        }
    }
    return 0;
}


void multiplication(double num1, double num2, double* result){
    *result=num1*num2;
}

void plus(double num1, double num2, double* result){
    *result=num1+num2;
}

void division(double num1, double num2, double* result){
    *result=num1/num2;
}

void subtraction(double num1, double num2, double* result){
    *result=fabs(num1-num2);
}
