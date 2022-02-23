/******************************************************************************

Welcome to my code 

*******************************************************************************/
#include <stdio.h>
int isprime(int num1)   /* returning 1 means it's a prime number, and returing 0 means it's a composite */ 
{
    int i, count = 0;
    for(i=2;  i <= num1/2; i++)
    {
       if (num1 % i== 0)
       {
            count =1 ;
            break;
       }
    }
     if (count == 0)
    {
        return 1;
    }
    else if (count== 1)
    {
        return 0;
    }
}
int main()
{
    printf("Welcome to consecutive composite number finder program\n");
    int  range1, range2, con_num, set_num;
     range1 = 10, range2= 10000, con_num= 20 ;
     printf("Please enter the starting range:  ");
     scanf("%d", &range1);
     printf("\n Please enter the ending range:  ");
     scanf("%d", &range2);
     printf("\n intended number of consecutive composite numbers:  ");
     scanf("%d", &con_num);
     printf("\n intended number of sets you want to find:  ");
     scanf("%d", &set_num);
    
    
    int j, set_count =0, counter=0, counter1 ;
    for (j= range1; j<= range2; j++)
    {
        if (isprime(j)== 0)
        {
            counter++; 
        }
        else if (isprime(j)== 1)
        {
            counter= 0; 
        }
        if (counter == con_num)
        {
            /* printf(" %d \n", j); */
            int k; 
            for (k = j- con_num +1 ; k<= j; k++)
            {
                printf("%d ", k);
                   
            }
            set_count++;
            printf("\n");
        }
        
        if (set_count== set_num)
        {
            break;
        }
    }
    if (set_count == 0)
    {
        printf("\n There isn't %d consecutive composite numbers in this given range. ", con_num);
    }
    else if (set_count != set_num)
    {
        printf("\n There are only %d sets avaiable. ", set_count);
    }

    
    
    
    return 0;
}


    




