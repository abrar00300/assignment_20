#include<stdio.h>
int main()
{
    char s[30],*p;
    p=s;
    int i;
    printf("Enter string =");
    fgets(s,30,stdin);
    for(i=0;s[i];i++);
    for(int j=i;j>=0;j--)
            printf("%c",p[j]);
    return 0;
}
