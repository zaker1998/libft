#include "libft.h"

int		ft_isalnum(int c)
{
	if (('0' <= c && c <= '9') || ft_isalpha(c))
		return (1);
	return (0);
}