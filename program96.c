//input: 4   4
/*output: 
     * * * *
     * * *
     * * 
     * 
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
   int iCnt=0;
   int jCnt=0;
   
   for(iCnt=iRow;iCnt>0;iCnt--)
   {
        for(jCnt=1;jCnt<=iCnt;jCnt++)
        {
             printf("*\t");
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