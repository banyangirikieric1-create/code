#include<stdio.h>
int main(){
    int price,discount;
    if(scanf("%d %d",&price,&discount)!=2)return 1;
    double af;
    af=price*discount/10.0;
    printf("%.2lf",af);
    return 0;
}