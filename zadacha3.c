#include <stdio.h>


int rectangle(double , double , double* , double *);

int main(){

double w,h, per, area;
    while(scanf("%lf %lf", &w, &h)!=EOF){
        if( (rectangle(w, h, &per, &area)) == -1){
            fprintf(stderr, "Invalid sides\n");
        }
        else {
            printf("Area=%lf  Peri=%lf\n", area, per);
        }
    }
    return 0;
}

int rectangle(double w, double h, double* S, double *P){
    if(w<=0 || h<=0){
        return -1;
    }
    else{
        *P=2*(w+h);
        *S=w*h;
    }
    return 0;
}
