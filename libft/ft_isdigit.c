#include <stdio.h>

int ft_isdigit(int c)
{
    if (c >= 48 && c<= 57)
        return(1);
    return(0);
}
int main(int argc, char *argv[])
{
    if (argc != 2)
        return(1);
    printf("%d", ft_isdigit(argv[1][0]));
    return(0);
}