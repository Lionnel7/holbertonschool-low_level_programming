#include "main.h"
{
    char    letter;

    letter = 'a';
    while letter <= 'z'
    {
        ft_putchar(letter);
        letter++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return 0;
}
