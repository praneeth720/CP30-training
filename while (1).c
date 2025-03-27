#include<stdio.h>
int main()
{
    int n,r=0,c=0;
    printf("enter n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        c=c+r;
        n=n/10;
    }
    printf("%d",c);
    return 0;
}