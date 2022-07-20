#include<stdio.h>

int Fun(char *large,char *small)
{
     
}
int main()
{
   char arr[50];
   char brr[50];
   int iRet=0;

   printf("enter first string");
   gets(arr);

   printf("enter second string");
   gets(brr);

   iRet=Fun(arr,brr);
   printf("%d",iRet);

   return 0;
}