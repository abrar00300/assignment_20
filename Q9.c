#include<stdio.h>
int main()
{
    int a[10],*p;
    p=&a[0];
    printf("Enter 10 numbers =\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",p+i);
    }
    for(int i=9;i>-1;i--)
        printf("\n%d",p[i]);
    return 0;
}
