#include<stdio.h>
int main()
{
    int f;
    scanf("%d",&f);
    for(int i=1;i<=f;i++)
    {
        char str[101];
        scanf("%s",str);

        int len=strlen(str);

        if(len<=10)
        {
            printf("%s\n",str);
        }
        else
        {
            printf("%c%d%c\n",str[0],len-2,str[len-1]);
        }
    }
}
