//Frequency of Vowel Consonent.
#include<stdio.h>
int main()
{
    char str_329[100],ch_329;
    int i_329,vowel_329,con_329;                    //Name : Sudip Chakrabarty  //Roll : 21053329
                                                    //Branch : cse
    printf("Enter a string : ");
    gets(str_329);

    i_329=vowel_329=con_329=0;

    while((ch_329=str_329[i_329])!='\0')
    {
        if(ch_329=='a' || ch_329=='e' || ch_329=='i' || ch_329=='o' || ch_329=='u' || 
        ch_329=='A' || ch_329=='E' || ch_329=='I' || ch_329=='O' || ch_329=='U')
        vowel_329++;

        else if((ch_329>='a' && ch_329<'z') || (ch_329>'A' && ch_329<'Z'))
        con_329++;
        i_329++;
    }

    printf("Number of vowels = %d\n",vowel_329);
    printf("Number of consonent = %d\n",con_329);
}