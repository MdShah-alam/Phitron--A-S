#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int position, value;
    scanf("%d",&position);
     scanf("%d",&value);
    for(int i=n-1;i>=position-1;i--)
    {
        a[i+1]=a[i];
    }
    a[position-1]=value;
    for(int i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }
}
