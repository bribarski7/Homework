#include <stdio.h>

double square_root2(double S) {
    double x0 = 1,x1;
    while(x0<S)x0*=10;
    int loop = 1;
    while(loop){
        x1 = (x0 + S/x0)/2;
        if(x1==x0){
        return x0;
        }
        x0 = x1;
    }
}

int main(){
    double i = square_root2(11943936);
    printf("%f\n",i);
    return 0;
}
