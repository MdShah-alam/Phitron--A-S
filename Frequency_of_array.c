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
        printf("%d  ",a[i]);
    }
    printf("\n");
    int count=0;
    int temp=a[0];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(temp==a[j])
            {
                count++;
            }
        }
        printf("%d->%d\n",temp,count);
        temp=a[i];
    }
}
