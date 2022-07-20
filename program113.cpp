#include<iostream>
using namespace std;

//4
//4*3*2*1
//24
class Number
{
    private:
    int iNo;               //characteristics

    public:
    //behaviours
    void accept()          //getter  
    {
        cout<<"enter the value:"<<endl;
        cin>>this->iNo; 
    }

    void display()         //setter
    {
        cout<<"value is:"<<this->iNo<<endl;
    }

    int Factorial()
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
    int iRet=0;

    //cout<<nobj.iNo

    nobj.accept();
    nobj.display();

    iRet=nobj.Factorial();

    cout<<"factorial is:"<<iRet<<endl;
    
    return 0;
}