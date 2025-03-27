#include<stdio.h>
int main(){
    int x,a,b,c=0;
    printf("enter a b");
    scanf("%d%d",&a,&b);
    printf("choose option\n");
    printf("1.add\n2.sub\n3.div\n4.mul");
    scanf("%d",&x);
    switch(x){
        case 1:c=a+b;
               printf("%d",c);
               break;
        case 2:c=a-b;
               printf("%d",c);
               break;
        case 3:c=a/b;
               printf("%d",c);
               break;
        case 4:c=a*b;
               printf("%d",c);
               break;
        default:printf("enter valid");       
    }
}