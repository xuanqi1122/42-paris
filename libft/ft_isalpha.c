#include "libft.h"

int	ft_isalpha(int c)
{
	return (( c >= 'a' && c <= 'z') || (c >= 'A' && C <= 'Z'))
}

/* 
** if c is a alpha character, it returns itself;
** but i don't understand where writes to return 0 if the test fail
*/