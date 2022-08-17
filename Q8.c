#include<stdio.h>
int main()
{
    int a[10],sum=0,*p;
    p=&a[0];
    printf("Enter 10 elements =\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",p+i);
        sum=sum+p[i];
    }
    printf("\n\nSum of all elements of array is %d",sum);

    return 0;
}
