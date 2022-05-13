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
    int max1=a[0],max2;
    for(int i=1;i<n;i++)
    {
        if(max1<a[i])
        {
            max2=max1;
            max1=a[i];
        }
    }
    printf("Largest = %d\n",max1);
    printf("second largest = %d",max2);
}
