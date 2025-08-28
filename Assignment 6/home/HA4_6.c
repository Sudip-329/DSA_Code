#include<stdio.h>
#include<string.h>
int main()
{
  char str[100];
  int i,j,len;
  printf("Enter a string: ");
  scanf("%s",&str);
  len=strlen(str);

  for(i=1; i<=len; i++)
  {
    for(j=0; j<=(len-i); ++j)
    {
      printf("%c", str[j]); 
    }
    for(j=0; j<(i-1); ++j)
    {
      printf("  "); 
    }
    for(j=(len-i); j>=0; --j)
    {  
      printf("%c",str[j]); 
    }
    printf("\n"); 
  }

  for(i=1; i<len; i++)
  {
    for(j=0; j<=i; ++j)
    {
      printf("%c",str[j]); 
    }
    for(j=2*(len-i-1); j>0; --j)
    {
      printf(" "); 
    }
    for(j=i; j>=0; --j)
    {  
      printf("%c",str[j]); 
    }
    printf("\n"); 
  } 
  return 0;
}