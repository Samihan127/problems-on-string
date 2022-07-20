#include<iostream>
using namespace std;

int StrlenX(char * str)   //(char str[])
{
    int iCnt=0;
    while(*str!='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet=0;

    cout<<"enter string"<<"\n";
    scanf("%[^'\n']s",arr);
    
    iRet=StrlenX(arr);
    cout<<"string length is:"<<iRet<<"\n";

    return 0;
}