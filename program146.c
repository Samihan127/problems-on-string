#include<stdio.h>

int CountWords(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if((*str>='A' && *str<='Z')||(*str>='a'&& *str<='z'))
        {
            str++;
            if(*str==' ' || *str=='\0')
            {
                iCnt++;
            }
            str--;
        } 
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[30];
    int iRet=0;

    printf("enter string:");
    gets(arr);

    iRet=CountWords(arr);
    printf("%d",iRet);

    return 0;
}