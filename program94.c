//input: 4   4
/*output: 
        A 
        B B 
        C C C 
        D D D D
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
   int iCnt=0;
   int jCnt=0;
   char ch='\0';
   
   for(iCnt=1,ch='A';iCnt<=iRow;iCnt++,ch++)
   {
        for(jCnt=1;jCnt<=iCnt;jCnt++)
        {
             printf("%c\t",ch);
        }
        printf("\n");
   }
}
int main()
{
  int iValue1=0;
  int iValue2=0;

  printf("enter number of rows\n");
  scanf("%d",&iValue1);

  printf("enter number of columns\n");
  scanf("%d",&iValue2);

  Display(iValue1,iValue2);

  return 0;
}