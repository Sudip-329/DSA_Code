//reverse every word
#include<stdio.h>
#include<string.h>
 
int main() 
{
   char sen[100];              //Name : Sudip Chakrabarty     Roll:21053329    Branch: CSE
   char str[100];
   
   printf("Enter a string: ");
   gets(sen);

   int i = 0, j = 0;
   while (sen[i] != '\0') 
    {
      if (sen[i] != ' ') 
      {
         str[j] = sen[i];
         j++;
      } 
      else 
      {
         str[j] = '\0';
         printf("%s", strrev(str));
         printf(" ");
         j = 0;
      }
      i++;
    }
 
    str[j] = '\0';
    printf("%s", strrev(str));
    return 0;
}