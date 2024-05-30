#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Entehr the height of Pyramid (between 1 && 8): ");

    }
    while (height < 1 || height > 8);

    for (int rows = 0; rows < height; rows++)
    {
        // print spaces
        for (int spaces = height - rows - 1; spaces > 0; spaces--)
        {
            printf(" ");
        }

        // print each Block
        for (int blocks = 0; blocks < rows; blocks++)
        {
            printf("#");
        }
        printf("\n");
    }
}
