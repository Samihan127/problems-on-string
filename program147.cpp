#include<iostream>
using namespace std;

int CntWord(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		int icnt = 0;
		while(*str != ' ')
		{
			icnt++;
			str++;
		}
//		str = str;
		if(icnt > 0)
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char arr[20] ;
	
	cout<<"Enter the string : ";
	cin.getline(arr,20);
	
	cout<<CntWord(arr);
	
	return 0;
}