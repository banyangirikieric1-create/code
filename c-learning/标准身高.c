#include<stdio.h>
int main(){
    int H;
    if(scanf("%d",&H)!=1)return 1;
    float m;
    m=(H-100)*0.9*2;
    printf("%.1f",m);
    return 0;
}