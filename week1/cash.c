#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float changeOwed = get_float("Change owed:\n");
    int change = changeOwed * 100;

    int counter = 0;

    if (change >= 25)
    {
        counter = change / 25;
        int mod25 = change % 25;
        printf("mod25 %i \n", mod25);
        if (mod25 >= 10)
        {
            counter += mod25 / 10;
            int mod10 = mod25 % 10;
            printf("mod10 %i \n", mod10);
            if (mod10 >= 5 && mod10 < 10)
            {
                counter += mod10 / 5;
                int mod5 = mod10 % 5;
                printf("mod5 %i \n", mod5);

            }
            if (mod10 >= 1 && mod10 < 5)
            {
                counter += mod10 / 1;
                int mod1 = mod10 % 1;

            }
        }
        if (mod25 >= 5 && mod25 < 10)
        {
            counter += mod25 / 5;
            int mod5 = mod25 % 5;
            if (mod5 >= 1)
            {
                counter += mod5 / 1;
            }
        }
        if (mod25 >= 1 && mod25 < 5)
        {
            counter += mod25 / 1;
        }
    }

    if (change >= 10 && change < 25)
    {
        int mod10 = change % 10;
        counter =  change / 10;
        if (mod10 >= 5)
        {
            counter += mod10 / 5;
            int mod5 = change % 5;
            if (mod5 >= 1)
            {
                counter += mod5 / 1;
            }
        }
        if (mod10 >= 1 && mod10 < 5)
        {
            int mod5 = change % 5;
            counter += mod5 / 1;
        }
    }

    if (change >= 5 && change < 10)
    {
        int mod5 = change % 5;
        counter = change / 5;
        if (mod5 >= 1)
        {
            counter += mod5 / 1;
        }
    }

    if (change >= 1 && change <5)
    {
        int mod5 = change % 5;
        counter += mod5 / 1;
    }

    printf("change %i\n", change);
    printf("counter %i\n", counter);
}
