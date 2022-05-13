#include<stdio.h>
int main()
{
    int A[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("A[%d] = %d\n",i,A[i]);
    }
    int temp=A[0];
    for(int i=1;i<10;i++)
    {
        if(temp<A[i])
        {
            temp=A[i];
        }
    }
    printf("  %d",temp);
    int max=temp;
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(max==A[i])
        {
            count++;
        }
    }
    printf("  %d\n",count);
    int a;
    scanf("%d ",&a);
    for(int i=0;i<10;i++)
    {
        if(a==A[i])
        {
            printf("%d",i);
        }
    }
}
