#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int Height;
    do
    {
        Height = get_int("Height:£¨1-8£©");
    }
    while (Height < 1 || Height > 8);
        for (int H = 0; H < Height; H++)
    {
        for (int K = 0; K < (Height - H-1); K++)
        {
            printf(" ");
        }
        for (int W = 0; W <= H; W++)
        {
            printf("#");
        }

        printf("\n");

        }

    return 0;
}

