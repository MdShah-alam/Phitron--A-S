#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    char s[100];
    for(int i=0; i<n; i++)
    {
        scanf("%s",s,a[i]);
    }
    for(int i=0; i<n; i++)
    {
        (a[i])=strlen(s[i]);
        for(int j=0; j<a[i]-1; j+=2)
        {
            printf("%c",s[j]);
        }
        printf("%c\n",s[a[i]-1]);
    }
}
/**
Input

2
bccddaaf
saallaammddookkhhj

Output
bcdaf
salamdokhj*/

