#include<stdio.h>
int main()
{
    int a,b,*p1,*p2;
    p1=&a;
    p2=&b;
    printf("enter two numbers =\n");
    scanf("%d%d",p1,p2);
    if(*p1>*p2)
    {
            printf("%d is the max number",*p1);
    }
    else if(*p2>*p1)
    {
        printf("%d is the max number",*p2);
    }
    else
    {
        printf("Both numbers are equal");;
    }
    return 0;
}
