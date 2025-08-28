//Replace all occurrences of a character.
#include <stdio.h>
#include <string.h>
int main()
{
  	char str_329[100], ch_329;                       //Name : Sudip Chakrabarty  //Roll : 21053329
  	int i_329, num_329;                              //Branch : cse
 
  	printf("\n Please Enter any String :  ");
  	gets(str_329);
  	
  	printf("\n Please Enter the Character that you want to replace :  ");
  	scanf("%c", &ch_329);
  	
  	getchar();

    printf("Enter the position of the character within the string with which you want to replace it :");
    scanf("%d", &num_329);
  	
  	for(i_329 = 0; i_329 < strlen(str_329); i_329++)
  	{
  		if(str_329[i_329] == ch_329)  
		{
  			str_329[i_329] = str_329[num_329-1];
 		}
	}
    printf("\n The Final String after Replacing All Occurrences of '%c' with '%c' = %s ",
	ch_329, str_329[num_329-1], str_329);
	return 0;
}