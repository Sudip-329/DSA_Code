//count the number of characters, alphabets, tabs ,newlines, words .........
#include<stdio.h>
#include<string.h>
int main()
{
    char str_329[100];                    //Name : Sudip Chakrabarty     Roll:21053329    Branch: CSE
    char ch_329;
    int i_329=0, vowel_329=0, con_329=0, space_329=0, other_329=0, newline_329=0, tab_329=0;
    
    printf("Enter a string: ");
    gets(str_329);
    
    i_329=vowel_329=con_329=other_329=0;

    while((ch_329=str_329[i_329])!='\0')
    {
       if(ch_329=='a' || ch_329=='e' || ch_329=='i'|| ch_329=='o'|| ch_329=='u'||
       ch_329=='A' || ch_329=='E' || ch_329=='I'|| ch_329=='O'|| ch_329=='U')
       {
           vowel_329++;
       }
       else if((ch_329>='a' && ch_329<='z') || (ch_329>='A' && ch_329<='Z'))
       {
           con_329++;
       }
       else if ((ch_329==' '))
       {
           space_329++;
       }
       else if ((ch_329=='\t'))
       {
           tab_329++;
       }
       else if ((ch_329=='\n'))
       {
           newline_329++;
       }
       else
       {
           other_329++;
       }
       i_329++;    
    }

    printf("Number of Vowels=%d\n", vowel_329);
    printf("Number of Consonants=%d\n", con_329);
    printf("Number of Spaces=%d\n", space_329);
    printf("Number of Words=%d\n", space_329+1);
    printf("Number of Tabs=%d\n", tab_329);
    printf("Number of Newlines=%d\n", newline_329);
    printf("Number of Alphabets=%d\n", vowel_329+con_329);
    printf("Others=%d\n", other_329);
    printf("Number of Characters=%d\n", vowel_329+con_329+newline_329+tab_329+space_329+other_329);
    return 0;
}