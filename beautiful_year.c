#include<stdio.h>
#include<stdbool.h>
int main()
{
    int year;
    scanf("%d",&year);

    for(int y=year+1;   ; y++)
    {
        int curyear=y;
        int frq[10]={0};
        bool repeat=false;
        while(curyear>0)
        {
            int d=curyear%10;
            curyear=curyear/10;
            frq[d]++;
            if(frq[d]>=2)
            {
                repeat=true;
            }
        }
        if(!repeat)
        {
            printf("%d",y);
            break;
        }
    }
}
