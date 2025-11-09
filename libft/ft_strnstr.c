#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    char *str;

    i = 0;
    while( (i < len) && big[i])
    {
        j = 0;
        while (little[i+j] == big[j])
        {
            str[i] = little[i];
            j++;
        }
        i++;
    }
    return(NULL);
}

int main()
{
    printf("%s", ft_strnstr("la ckhaine", "chaine", 2));
    return(0);
}