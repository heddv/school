#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return(c - 32);
	return(0);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return(0);
	printf("%c", ft_toupper(argv[1][0]));
	return(0);
}
