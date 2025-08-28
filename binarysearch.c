#include <stdio.h>
int main() 
{   
    int c_329, first_329, last_329, middle_329, n_329, key_329, array_329[100]; 
    int temp_329, i_329, j_329;

    printf("Enter number of elements: \n");                            //Name : Sudip Chakrabarty
    scanf("%d",&n_329);                                                //Roll : 21053329
                                                                       //Branch : CSE
    printf("Enter %d integers: \n", n_329); 
    for (c_329 = 0; c_329 < n_329; c_329++)
    scanf("%d",&array_329[c_329]); 

    for (i_329=0; i_329<n_329-1; i_329++)
    {
        
        for (j_329=0; j_329<(n_329-i_329)-1; j_329++)
        if (array_329[j_329]>array_329[j_329+1])
        {
            temp_329=array_329[j_329];
            array_329[j_329]=array_329[j_329+1];
            array_329[j_329+1]=temp_329;
        }
    }
    printf("The numbers sorted in Assending Order is: \n");
    for (i_329=0; i_329<n_329; i_329++)
        printf("%d\n", array_329[i_329]);

    printf("Enter value to find: \n"); 
    scanf("%d", &key_329);

    first_329 = 0; 
    last_329 = n_329 - 1;
    middle_329 = (first_329+last_329)/2; 

    while (first_329 <= last_329) 
    { 
        if (array_329[middle_329] < key_329)
	    first_329 = middle_329 + 1; 
    else if(array_329[middle_329] == key_329)
    { 
    	printf("%d found at location %d.\n", key_329, 	middle_329+1);
 	    break; 
    } 
    else 
        last_329 = middle_329 - 1;

    middle_329 = (first_329 + last_329)/2; 
    }

    if (first_329 > last_329)
    printf("Not found! %d is not present in the list.\n", key_329);

    return 0; 
}