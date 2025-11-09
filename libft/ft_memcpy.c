#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *dest2 = dest;
    char *src2 = src;
    int i;

    i = 0;
    while (i < n)
    {
        dest2[i] = src2[i];
        i++;
    }
    return(dest);
}

int main()
{
    char *src = "une phrase";
    char dest[20] = src + 5;   // "" important sinon terminal affiche �

    int i;

    i = 0;
    while (dest[i])
    {
        printf("%c", dest[i]);

        i++;
    }
    
    ft_memcpy(dest, src, 3);

    i = 0;
    while (dest[i])
    {
        printf("%c", dest[i]);
        i++;
    }
    return(0);
}