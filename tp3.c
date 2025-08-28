//Replace all occurrences of a substring.
#include <stdio.h>
#include<string.h>
void main()                                                 //Name : Sudip Chakrabarty  //Roll : 21053
{                                                           //Branch : cse
   char str_[100], sstr_[100];
   char ch_;
   int pos_, l_, c_ = 0, num_, i_;
   
    printf("\n\nExtract a substring from a given string:\n");  
 
    printf("Input the string : ");
    fgets(str_, sizeof str_, stdin);
 
   printf("Input the position to start extraction :");
   scanf("%d", &pos_);
   
   printf("Input the length of substring :");
   scanf("%d", &l_);
 
   while (c_ < l_) 
   {
      sstr_[c_] = str_[pos_+c_-1];
      c_++;
   }
   sstr_[c_] = '\0';
 
   printf("The substring retrieve from the string is : %s \n\n", sstr_);

    printf("Enter the position of the character within the string which you wnat to replace:  ");
    scanf(" %d", &num_);
    
	printf("Enter the replacement character :");
	scanf(" %c", &ch_);

	for(i_ = 0; i_ < strlen(sstr_); i_++)
  	{
  		if(sstr_[i_] == ch_)  
		{
  			sstr_[i_] = sstr_[num_-1];
 		}
	}
    printf("\n The Final String after Replacing All Occurrences of '%c' with '%c' = %s ",
    ch_, sstr_[num_-1], sstr_);
}