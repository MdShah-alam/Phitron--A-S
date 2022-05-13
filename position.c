#include<stdio.h>
int main()
{
    int n,b;
    scanf("%d %d",&n,&b);

    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for(int i=0; i<n; i++)
    {
        if(b==i+1)
        {
            temp=a[i];
        }
    }
    for(int i=b; i<n; i++)
    {
        if(a[i]>0)
        {
            if(temp<=a[i])
            {
                printf("%d",i+1);

            }
        }
        else
            printf("0");
    }
}
