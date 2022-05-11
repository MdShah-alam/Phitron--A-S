#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int score[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&score[i]);
    }
    int answer;
    int maxvalue=score[0];
    int minvalue=score[0];
    for(int i=0;i<n;i++)
    {
        if(minvalue>score[i] || maxvalue<score[i])
        {
            answer++;
        }
        if(score[i]>maxvalue)
        {
            maxvalue=score[i];
        }
        if(score[i]<minvalue)
        {
            minvalue=score[i];
        }
    }
    printf("%d",answer);
}
