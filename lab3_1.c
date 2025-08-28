    #include <stdio.h>
    int main()
    {
        int number_329[20]={2,12,3,7,32,6,75,45,8,1,56,78,61,11,49,22,32,77,87,21},a_329;

        for (int i_329 = 0; i_329 < 20; ++i_329)                             //Name : Sudip Chakrabarty
        {                                                                    //Roll : 21053329
            for (int j_329 = i_329 + 1; j_329 < 20 ;++j_329)
            {
                if (number_329[i_329] < number_329[j_329]) 
                {
                    a_329 = number_329[j_329];
                    number_329[j_329] = number_329[i_329];
                    number_329[i_329] = a_329;
                }
            }
        }
        printf("Second largest number: %d ",number_329[1]);
return 0;
}