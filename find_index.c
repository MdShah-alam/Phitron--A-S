#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int b;
    scanf("%d",&b);
    for(int i=0;i<n;i++)
    {
        if(b==a[i])
        {
            printf("%d ",i);
        }
    }

}
