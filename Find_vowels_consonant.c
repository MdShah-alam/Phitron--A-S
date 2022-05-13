#include<stdio.h>
int main()
{
    int i,vowel,consonante,other;
    char str[100],ch;
    scanf("%s",&str);
    printf("%s",str);
    i=vowel=consonante=other=0;
    while((ch=str[i])!='\0')
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            vowel++;
        }
        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
            consonante++;
        }
        i++;
    }
    printf("\n%d  %d ",vowel,consonante);
}
