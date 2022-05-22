#include<stdio.h>
int main()
{
    char a[20];
    char b[20];
    scanf("%s%s",a,b);
    int idx=0;
    while(a[idx]==b[idx]&&a[idx]!='\0'&&b[idx]!='\0')
    {
        idx++;
    }
    if(a[idx]==b[idx])
    {
        printf(" %c %c",a[idx],b[idx]);

    printf("Equal string");
    }

    else if(a[idx]=='\0'&&b[idx]!='\0')
        printf("%s",a);
    else if(a[idx]!='\0'&&b[idx]=='\0')
        printf("%s",b);
    else if(a[idx]<b[idx])
        printf("%s",a);
    else
        printf("%s",b);
}
