//input: 4   4
/*output: 
         $ * * *
         #  $ * *
         # #  $ *
         # # #  $
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
   int iCnt=0;
   int jCnt=0;
   if(iRow!=iCol)
   {
       printf("invalid input....enter row number equal to column number\n");
       return;
   }
   for(iCnt=1;iCnt<=iRow;iCnt++)
   {
        for(jCnt=1;jCnt<=iCol;jCnt++)
     {
         if(iCnt==jCnt)

         if(iCnt<jCnt)
         {
             printf("*\t");
         }
         else
         {
             printf("#\t");

         }
         
         if(iCnt==jCnt)
         {
             printf("$\t");
         }
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