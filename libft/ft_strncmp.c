#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, int n)
{
	int i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			//printf("ffffff");
			return(s1[i] - s2[i]);
		}
		i++;
	}
	return(0);
}

int main(int argc, char *argv[])
{
	if (argc != 4)
		return(0);
	printf("%d", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	//printf("%d",  atoi(argv[3]));
	//printf("%d",  argc);
	return(0);
}
