# include <stdio.h>
# include <cs50.h>
float get_positive_float(void);
int main(void){

float change = get_positive_float();
printf("%f\n",change);

int total = 0;


if (change > 0.25)
{   
    while (change > 0.25)
    {
        (change = change - 0.25);
        (total ++);
    }
    if (change > 0.10)
    {
        while (change > 0.10)
        {
            (change = change - 0.10);
            (total ++);
        }
        if (change > 0.05)
        {
            while(change > 0.05)
         {
            (change= change - 0.05);
            (total ++);
         }
        }
        else if (change > 0.01)
        {   
            while (change > 0.00)
            {
                (change = change - 0.01);
                (total ++);
            }

        }


    }

}
printf("%d\n",total);


}
float get_positive_float(void)
{
    float n;
    do 
    {
        n= get_float("Change: ");
    }
    while (n<0.0);
    return n;

}
