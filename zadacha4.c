#include <stdio.h>
#include <math.h>

int quadEq(double a, double b, double c, double *x1, double *x2);
void dis(double a, double b, double c, double* D);

int main(){
    double x1, x2, a,b,c, Dis;
    while(scanf("%lf %lf %lf", &a, &b, &c)!=EOF){
        if(quadEq(a,b,c, &x1, &x2)==-1){
            fprintf(stderr, "No real roots");
        }
        else {
            printf("x1=%lf x2=%lf \n", x1,x2);
        } 
    }
    return 0;
}

int quadEq(double a, double b, double c, double *x1, double *x2){
    double D;
    dis(a, b, c, &D); // Na tozi red D pridobiva pravilnata stojnost
    if(D < 0){
        return -1;
    }
    if(a!=0){
        *x1 = (-b - sqrt(D)) / (2 * a);
        *x2 = (-b + sqrt(D)) / (2 * a);
    }
    else{
        if (b!=0){
            *x1 = -c / b;
        }
        else
        {
            if(c!=0){
                return 1;
            }else{
                return 2;
            }
        }
        *x2 = NAN;
    }
    return 0;
}

void dis(double a, double b, double c, double* D){
    *D = ( b * b) - 4 * a * c;
}