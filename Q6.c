#include<stdio.h>
int main()
{
    char s[40],*p;
    p=&s[0];
    int cnt=0;
    printf("Enter string =");
    fgets(s,40,stdin);
    for(int i=0;i<40;i++)
    {
        if(p[i]!=0)
            cnt++;
        else
            break;
    }
    printf("Length of string is %d",cnt-1);
    return 0;
}
