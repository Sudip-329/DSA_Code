//palindrome string
#include<stdio.h>
#include<string.h>
int main()
{                                      //Name : Sudip Chakrabarty     Roll:21053329    Branch: CSE
    char str_329[20];
    int i_329, len_329, temp_329=0;

    printf("Enter a string:");
    gets(str_329);
    len_329 = strlen(str_329);

    for(i_329=0;i_329 < len_329 ;i_329++)
    {
        if(str_329[i_329] != str_329[len_329-i_329-1])
        {
            temp_329 = 1;
            break;
        }
    }
    
    if (temp_329==0) 
    {
        printf("String is a palindrome");
    }    
    else 
    {
        printf("String is not a palindrome");
    }

    return 0;
}