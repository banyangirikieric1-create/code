#include <stdio.h>
int main(){
    double r,cl,cs;
    if(scanf("%lf",&r)!=1)return 1;
    double pi = 3.1415926535;
    cl=2*pi*r;
    cs=pi*r*r;
    printf("circumference=%.4lf\n",cl);
    printf("area=%.4lf\n",cs);
    return 0;
}