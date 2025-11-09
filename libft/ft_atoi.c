

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *src)
{
    int i;
    int sign;
    int res;

    i = 0;
    sign = 1;
    res = 0;
    while ((src[i] >= 9 && src[i] <= 13) || src[i] ==  32)
        i++;
    
    while (src[i] == '-' || src[i] == '+')
    {
        if (src[i] == '-' && src[i+1] != '-')
            sign -= sign;
        else
            return(0);
        i++;
    }

    while (src[i] >= 48 && src[i] <= 57)
    {
        res = res * 10 + (src[i] - '0');
        i++;
    }
    return(res);
}

int main()
{
    printf("%d", ft_atoi("      -++1235g"));
    printf("%d", atoi("      -1235g"));
    return(0);
}