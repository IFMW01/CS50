# include <stdio.h>
# include <cs50.h>

int get_positive_int(void);
int main(void)
{
    int height = get_positive_int();
    //printf("%i\n", height);
    
    
    for (int j = 1; j <=height; j++)
    {   
       for (int i = height; i>j; i--)
       {
           printf(" ");
       }
        for (int i = 0 ; i <j; i++)
        {
            printf("#");
        }   
        printf("  ");

        for (int i = 0 ; i <j; i++)
        {
             printf("#");
        }
        printf("\r\n");
    }
}



int get_positive_int (void)
{
    int n;
    do 
     {
         n = get_int("Positive integer: ");
     }
    while (n < 1);
    return n;
}

