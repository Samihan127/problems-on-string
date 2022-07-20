#include<stdio.h>
#include<stdlib.h>
//4
//4*3*2*1
//24

int Factorial(int iNo)
{
    int iFact=1;
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iFact=iFact*iCnt;
        //iFact*=iCnt    short hand assignment operator
    }
    return iFact;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter a number\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("factorial is:%d\n",iRet);
    
    return 0;
}