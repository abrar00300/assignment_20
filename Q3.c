#include<stdio.h>
void sort(int*,int);
int main()
{
    int a[10];
    printf("enter 10 values =\n");
    for(int i=0;i<10;i++)
            scanf("%d",&a[i]);
    sort(&a[0],10);
    for(int i=0;i<10;i++)
        printf("\n%d",a[i]);
    return 0;
}
void sort(int *p,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(p[i]<p[j])
            {
                int t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
        }
    }
}
