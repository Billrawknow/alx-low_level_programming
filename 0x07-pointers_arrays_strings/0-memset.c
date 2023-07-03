#include "main.h"
/**
*_memset - fills memory with a constant byte.
*fills the first n bytes of the memory area pointed
*to by s with the constant b.
*@s: pointer to memory area.
*@b: constant to fill memory with.
*@n: bytes of the memory area to be filled.
*Return: pointer to memory area s.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++) {
        dest[i] = src[i];
    }

    return dest;
}
