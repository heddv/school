#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return(c + 32);
	return(0);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return(0);
	printf("%c", ft_tolower(argv[1][0]));
	return(0);
}
