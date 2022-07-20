#include<stdio.h>

void Copy(char *src,char *dest)
{
    while(*src!='\0')
    {
        
        if(*src=='A' || *src=='E'||*src=='I'||*src=='0'||*src=='U'||*src=='a'||*src=='e'||*src=='i'||*src=='o'||*src=='u')
        {
             *dest=*src;
        }
        else if(*src>='A' && *src<='Z')
        {
            *src=*src+32;
            *dest=*src;
        }
        else if (*src>='a'&&*src<='z')
        {
            *src=*src-32;
            *dest=*src;
        }
        *src++;
        *dest++;
    }
    *dest='\0';

}
int main()
{
    char arr[50];
    char brr[50];
    
    printf("enter string:");
    gets(arr);

    Copy(arr,brr);
    printf("%s",brr);
    return 0;
}