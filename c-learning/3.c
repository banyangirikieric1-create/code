#include <stdio.h>
#include<math.h>
double fix_zero(double x){
    if(fabs(x)<1e-6)return 0.0;
    return x;
}
int main(){
    double a,b,c;
    if(scanf("%lf %lf %lf",&a,&b,&c)!=3)return 1;
    if (a==0){
        if (b==0){
            if (c==0){
                printf("Zero Equation\n");
            }else{
                printf("Not An Equation\n");
            }
        }else{
            double x=-c/b;
            printf("%.2lf\n",fix_zero(x));
        }
    return 0;}
    double de=b*b-4*a*c;
    double x1=(-b+sqrt(de))/(2*a);
    double x2=(-b-sqrt(de))/(2*a);
    if (de>0){
    if (x1>x2){
        printf("%.2lf\n%.2lf\n",fix_zero(x1),fix_zero(x2));
    }else{
        printf("%.2lf\n%.2lf\n",fix_zero(x2),fix_zero(x1));
    } }else if (de==0){
        double x=-b/(2*a);
        printf("%.2lf\n",fix_zero(x));
    }else{
        double real=-b/(2*a),image=fabs(sqrt(-de)/(2*a));
        printf("%.2lf+%.2lfi\n",fix_zero(real),fix_zero(image));
        printf("%.2lf-%.2lfi\n",fix_zero(real),fix_zero(image));

    }
return 0;
}