#include "libft.h"

char ft_tolower(char c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}