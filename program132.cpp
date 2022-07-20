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
    char arr[20];
    cout<<"enter string"<<"\n";
    cin.getline(arr,20);
    
    Display(arr);

    return 0;
}