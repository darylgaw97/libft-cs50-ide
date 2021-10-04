#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;
    char *mem;

    mem = s;
    i = 0;
    while (i < n)
    {
        mem[i] = 0;
        i++;
    }
}

/*
Segmentation fault occurs when attempting to use bzero on a string.
However, bzero works without seg fault when using it on array of chars.
    Example:
        scenario 1:
            char *str = "abcde";
            bzero(str, 5);
                seg fault occurs!

        scenario 2:
            char str[5] = {'a', 'b', 'c', 'd', 'e'};
            bzero(str,5);
                no seg fault!
*/