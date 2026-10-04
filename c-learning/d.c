#include<stdio.h>
int main(){
    int a,b,c,d;
    if(scanf("%d",&d)!=1)return 1;
    a=d/100;
    b=(d%100)/10;
    c=d%10;
    printf("%d",c*100+b*10+a);
    return 0;
}