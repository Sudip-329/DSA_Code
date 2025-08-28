//to print a given string in an alphabetical order
#include<stdio.h>
#include<string.h>
int main()
{
    char str_[100],temp_;
    printf("\nEnter a String: ");
    gets(str_);                        //Name : Sudip Chakrabarty     Roll:21053    Branch: CSE
    int i_,j_,len_;
    len_=strlen(str_);
    for ( i_ = 0; i_ <len_; i_++)
    {
        for(j_=i_+1;j_<len_;j_++)
        {
            if (str_[i_]>str_[j_])
            {
                temp_=str_[i_];
                str_[i_]=str_[j_];
                str_[j_]=temp_;
            }
        }
    }
    printf("Alpabetical order of string: %s \n\n",str_);
    return 0;
}
