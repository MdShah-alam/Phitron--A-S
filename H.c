#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,b;
    scanf("%d%d",&n,&b);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1; i<=b; i++)
    {
        a[n]=a[0];
        for(int j=0,i=1; j<n; j++,i++)
        {
            a[j]=a[i];
        }
    }
    for(int j=0; j<n; j++)
    {
        printf("%d ",a[j]);
    }
}
/**if n=5,b=4
[1, 2, 3, 4, 5] -> [2, 3, 4, 5, 1] -> [3, 4, 5, 1, 2] -> [4, 5, 1, 2, 3] -> [5, 1, 2, 3, 4]*/
