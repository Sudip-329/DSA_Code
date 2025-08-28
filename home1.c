    #include <stdio.h>
    int main()
    {                                                //Name : Sudip Chakrabarty
        int i, j, a, n;              //Roll : 21053329
        int number[100];                         //Branch: CSE
        float median;                            //Section : A10

        printf("Enter the number of numbers you want to input: \n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; i++) 
        {
            for (j = i + 1; j < n; j++)
            {
                if (number[i] > number[j]) 
                {
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
        printf("The odd number series is: \n");
        for (i=0; i<n; i++)
        {
            if (number[i]%2!=0)
            {
                printf("%d\n", number[i]);
            }
        }
        printf("The even number series is: \n");
        for (i=0; i<n; i++)
        {
            if (number[i]%2==0)
            {
                printf("%d\n", number[i]);
            }
        }
        return 0; 
    }