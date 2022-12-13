#include "main.h"

/**
 * main - check the code
 *
 * Return: None.
 */
void print_alphabet(void)
{
        char counter;
        counter = 'a';
        while (counter <= 'z')
        {
                write(1, &counter, 1);
                counter++;
        }
        write(1, "\n", 1);
        return;
}
