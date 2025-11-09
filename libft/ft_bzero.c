#include <stdio.h>
#include <strings.h>
void ft_bzero(void *ptr, int n)
{
    char *p = ptr;

    int i;

    i = 0;
    while (i < n)
    {
        //printf("cccc");
        p[i] = 0;
        i++;
    }
}
int main()
{
    char array [] = "test";

    int length;

    /* Display the initial values */
    for( length=0; length<5; length++) {
        printf( "%c ", array[ length ] );
    }
    printf( "\n" );

    /* Reset the memory bloc */
    ft_bzero(array, 4);

    /* Display the new values */
    for( length=0; length<5; length++) {
        //printf("ooo");
        printf( "%c ", array[ length ] );
    }
    printf( "\n" );

    return(0);
}