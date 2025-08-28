//concatenate two strings 
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    int i=0,j=0;                    //Name : Sudip Chakrabarty     Roll:21053329    Branch: CSE
    printf("Enter string 1 : ");
    gets(a);
    printf("Enter string 2 : ");
    gets(b);
    for(i=0; a[i]!='\0'; i++)
    {
        c[j] = a[i];
        j++;
    }
    for(i=0; b[i]!='\0'; i++)
    {
        c[j] = b[i];
        j++;
    }
    c[j] = '\0';
    printf("The string is : %s",c);
}