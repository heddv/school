#include <stdio.h>

char*	ft_strchr(char *str, int c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return(&str[i]);
		i++;
	}
	return(str);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
		return(0);
	printf("%s", ft_strchr(argv[1],argv[2][0]));
	//printf("%s", ft_strchr("abcdefg",' '));
	//printf("%s", ft_strchr("abcdefg",'e'));
	return(0);
}
