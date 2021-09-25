#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    int difference;

    i = 0;
    difference = 0;
    while (i < n)
    {
        difference += s1[i] - s2[i];
        i++;
    }
    return (difference);
}