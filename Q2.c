#include<stdio.h>
int swap(char*,char*);
int main()
{
    char c1,c2;
    printf("enter character 1  =");
    scanf("%c",&c1);
    fflush(stdin);
    printf("enter character 2  =");
    scanf("%c",&c2);
    swap(&c1,&c2);
    printf("\n %c  %c ",c1,c2);
    return 0;
}
int swap(char *a,char *b)
{
    int t=*a;
    *a=*b;
    *b=t;
    return 0;
}
