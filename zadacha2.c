#include <stdio.h>
#include <math.h>

int triangle(double, double, double, double*, double *);


int main(){
    double a, b, c, area, per, p;
    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF){
        if((triangle(a, b, c, &per,  &area)) == -1){
            fprintf(stderr, "Invalid\n");
        }
        else{
            printf("P= %.2lf  S=%.2lf\n", per, area);
        }    
    }
    return 0;
}

int triangle(double a, double b, double c, double* S, double *P){
    if(a <= 0 || b <= 0 || c <= 0 || a + b < c || b + c < a || c + a < b){
        return -1;
    }
    else {
        double p;
        *P = a + b + c;
        p = *P / 2;
        *S = sqrt(p * (p-a) * (p-b) * (p-c));
        return 0;

    }
}
