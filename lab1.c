    //sorting number
    #include <stdio.h>
    int main()
    {                                                         //Name : Sudip Chakrabarty
        int number[200],a,n;                      //Roll : 21053329
        printf("How many term you want:");                    //Branch : CSE
        scanf("%d",&n);                                   //Section : A10
        for (int i = 0; i <n; i++)
        {
            scanf("%d",&number[i]);
        }
        for (int i = 0; i < n; ++i) 
        {
            for (int j_287 = i + 1; j_287 < n ;++j_287)
            {
                if (number[i] < number[j_287]) 
                {
                    a = number[i];
                    number[i] = number[j_287];
                    number[j_287] = a;
                }
            }
        }
        for (int i = 0; i <n; i++)
        {
            printf(" %d ",number[i]);
        }
 
}