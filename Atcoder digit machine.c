#include<stdio.h>
int main()
{
    int to[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&to[i]);
    }
    int curr=0;
    for(int i=0;i<5;i++)
    {
        curr=to[curr];
    }
    printf("%d",curr);
}
