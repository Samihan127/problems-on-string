#include<iostream>
using namespace std;

//4
//4*3*2*1
//24
class Number
{
    public:
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
};

int main()
{
    Number nobj;

    int iValue=0;
    int iRet=0;

    cout<<"enter a number\n";
    cin>>iValue;

    iRet=nobj.Factorial(iValue);

    cout<<"factorial is:"<<iRet<<endl;
    
    return 0;
}