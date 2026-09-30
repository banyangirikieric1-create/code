#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){
        if (a>c) d=a;
        else d=c;
    }else{
        if (a>c){
            if (a>b) d=a;
            else d=b;
        }
    }
printf("%d",d);
    return 0;
}
    

        
    