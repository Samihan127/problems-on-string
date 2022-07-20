#include<iostream>
using namespace std;

void Display(char * str)   //(char str[])
{
    while(*str!='\0')
    {
        cout<<*str<<"\n";
        str++;
    }
}
int main()
{
    char arr[]="hello";
    
    Display(arr);

    return 0;
}