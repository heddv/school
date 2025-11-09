#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	printf("%d", ft_strlen(argv[1]));  // &argv[1][0] meme chose
	return(0);
}
