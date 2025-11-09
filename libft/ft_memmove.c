#include <string.h>
#include <stdio.h>

void *memmove(void *dest, const void *src, size_t n)
{
    char *dest2 = dest;
    char *src2 = src;

    int i;

    i = n-1;
    while (i > 0)
    {
        dest2[i+1] = src2[i];
        i--;
    }
    return(dest);
}
int main()
{
    char dest[20] = "";   // "" important sinon terminal affiche �
    char *src = "copier";

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