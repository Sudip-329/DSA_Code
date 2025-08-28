// Home Assignment, Question-3(Concatenate)
#include <stdio.h> 
#include<string.h>
int main() 
{ 
char str_1[100];                                  //Name : Sudip Chakrabarty   
char str_2[100];                                  //Roll : 21053329
                                                  //Branch : CSE
printf("Enter a String: \n");
gets(str_1);

printf("Enter another String: \n");
gets(str_2);

printf("Concatenated String : %s\n", strcat(str_1, str_2)); 
return 0;
}