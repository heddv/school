#include <stdio.h>
#include <stdlib.h> //pour atoi

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return(1);
	return(0);
}

int main(int argc, char *argv[])
{
	int i = 0;
	if (argc != 2)
		return(0);
	
	printf("%d", ft_isalpha(argv[1][0]));
		
	return(0);
}
