#include<stdio.h>
int main()
{
    int a[10]= {1,2,3,4,5,6,7,8,9,0};
    int b[10]= {11,22,33,44,55,66,77,88,99,00};
    for(int i=0; i<10; i++)
    {
        a[i]=a[i]+b[i];
        b[i]=a[i]-b[i];
        a[i]=a[i]-b[i];
    }
    for(int i=0; i<10; i++)
    {
        printf("%d  ",a[i]);
    }
}
