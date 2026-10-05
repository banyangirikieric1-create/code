#include<stdio.h>
int main(){
    int x,y,s;
    if(scanf("%d %d",&x,&y)!=2)return 1;
    s=5000-(x*y)/2-((y+100)*(100-x))/2;
    printf("%d\n",s);
    return 0;
}