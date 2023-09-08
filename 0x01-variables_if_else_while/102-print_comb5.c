#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
    int tens;
    int ones;

    for (tens = 0; tens < 100; tens++)
    {
        for (ones = 0; ones < 100; ones++)
        {
            putchar((tens / 10) + '0');
            putchar((tens % 10) + '0');
            putchar(' ');
            putchar((ones / 10) + '0');
            putchar((ones % 10) + '0');

            if (!(tens == 99 && ones == 99))
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return (0);
}
