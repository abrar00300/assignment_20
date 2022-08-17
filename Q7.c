#include<stdio.h>
int main()
{
    char s[40],*p;
    p=&s[0];
    int cnt=0,cnt1=0;
    printf("Enter string =");
    fgets(s,40,stdin);
    for(int i=0;s[i];i++)
    {
        if(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u'||p[i]=='A'||p[i]=='E'||p[i]=='I'||p[i]=='O'||p[i]=='U')
            cnt++;
        else
            cnt1++;
    }
    printf("\n\nTotal numbers of vowels are %d\n\nTotal numbers of consonants are %d",cnt,cnt1);
    return 0;
}
