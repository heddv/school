#include <stdio.h>
#include <stdlib.h>

int ft_strlcpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] += src[i];
		i++;
	}
	dest[i] = '\0';
	return(i);
}

int main()
{
	char dest[30] = "you ";
	char src[6] = "hello";
	
	printf("%d\n", ft_strlcpy(dest, src, 3));
	
	printf("%s \n", dest); 
	printf("%s \n", src); 
	return(0);
}
