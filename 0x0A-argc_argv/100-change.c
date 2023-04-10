#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: Number of arguments.
 * @argv:
 *
 * Return: 0 if successful, 1 otherwise
 *
 */

int main(int argc, char **argv)
{
        int num1, num2 = 0;

        if (argc != 2)
        {
                printf("Error\n");
                return (1);
        }

        num1 = atoi(argv[1]);
        if (num1 < 0)
        {
                printf("0\n");
                return (0);
        }


                while (num1 >= 25)
                {
                        num1 -= 25;
                        num2++;
                }

                while (num1 >= 10)
                {
                        num1 -= 10;
                        num2++;
                }

                while (num1 >= 5)
                {
                        num1 -= 5;
                        num2++;
                }

                num2 += num1;

                printf("%d\n", num2);

                return (0);
}
