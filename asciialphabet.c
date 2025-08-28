#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch_329;
    printf("\n Please Enter any alphabet : ");
    scanf("%c",&ch_329);

    if(isalpha(ch_329))
    {
        if(ch_329>=97 && ch_329<122)
        {
            ch_329 = ch_329 - 32;
            printf("\n Uppercase of the entered character is %c.",ch_329);
        }
        else
        printf("Entered value is already in uppercase : %c.",ch_329);
    }
    else
    printf("Entered value is not an alphabet.");
}