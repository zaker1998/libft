#include "libft.h"

int ft_isdigit(int c)
{
	while (c >= '0' && c <= '9')
		return (1);
	return (0);
}