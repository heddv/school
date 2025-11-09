#include <stdio.h>

int	ft_isascii(int c)
{
	return(c >= 0 && c <= 0177);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return(0);
	printf("%d", ft_isascii(argv[1][0]));
	return(0);
}
