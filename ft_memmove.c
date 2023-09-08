#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char       *d;
    const unsigned char *s;

    if (dest == src || n == 0)
    {
        return (dest);
    }

    d = (unsigned char *) dest;
    s = (const unsigned char *) src;

    if (dest < src)
    {
        return (ft_memcpy(dest, src, n));
    }
    else
    {
        while (n > 0)
        {
            d[n-1] = s[n-1];
            n--;
        }
    }
    return (dest);
}