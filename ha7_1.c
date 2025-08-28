//capitalize first character of each word.
#include<stdio.h>
#include<string.h>
int main()
{
    char a_[100];                    //Name : Sudip Chakrabarty     Roll:21053    Branch: CSE
    int i_, y_;

    printf("Enter a string: ");
    gets(a_);

    y_=strlen(a_);
    printf("The capitalizing  of the first character of each word: \n");

    for (i_=0; i_<y_; i_++)
    {
        if ((a_[i_]==' ')|| (a_[i_]=='\t'))
        {
            a_[i_+1]= toupper(a_[i_+1]);
        }
    }
    
    if ((a_[0]==' ')|| (a_[0]=='\t'))
        a_[1]= toupper(a_[1]);
    else
        a_[0]= toupper(a_[0]);
    
    printf("%s", a_);
    return 0;
}