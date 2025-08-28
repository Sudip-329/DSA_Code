#include<stdio.h>
#include<ctype.h>
#include<math.h>
int main()
{
    char ch_329;
    printf("\nEnter Alphabet : ");
    scanf("%c",&ch_329);
    
    if((ch_329>='a')&&(ch_329<='z')||(ch_329>='A')&&(ch_329<='Z'))
    {
        if (ch_329=='a'||ch_329=='A'||ch_329=='e'||ch_329=='E'||ch_329=='i'||ch_329=='I'||
        ch_329=='o'||ch_329=='O'||ch_329=='u'||ch_329=='U')
        {
           
            printf("\nThe entered character is %c is a vowel",ch_329);
        }
        else
        printf("The entered character is %c is a constant",ch_329);
    }
    else
    printf("Enter chracter %c is not an Alphabet.",ch_329);

    return 0;
}