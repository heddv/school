#include <stdio.h>

int	ft_isalnum(int c)
{
	return((c >= 48 && c <= 57) || ((c >= 97 && c <= 122) || (c >= 65 && c <= 90)));
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return(0);
	printf("%d", ft_isalnum(argv[1][0]));
	return(0);
}
