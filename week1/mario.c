// Prints an n-by-n grid of bricks with a loop

#include <cs50.h>
#include <stdio.h>

void draw(int h);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Draw pyramid
    draw(height);
}

void draw(int h)
{
    // Draw one more row of width h
    for (int i = 1; i <= h; i++)
    {
        int dots = h - i;
        // printf("%d", dots);
        for (int d = 1; d <= dots; d++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
