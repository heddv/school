#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *ft_memset(void *ptr, int val, int n)
{
    char *p = ptr;
    int i;

    i = 0;
    while (i < n)
    {
        p[i] = val;
        i++;
    }
    return(p);   //un void* retourn qqchose != void seul qui ne retourne rien
}

int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    size_t size = sizeof( int ) * 5;
    int length;

    /* Display the initial values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    /* Reset the memory bloc */
    ft_memset( array, 4, size );

    /* Display the new values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
    
    return 0;
}