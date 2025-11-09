#include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return(0);
	printf("%d", ft_isprint(argv[1][0]));
	return(0);
}
