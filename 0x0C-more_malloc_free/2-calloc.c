#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an aaray
 * @nmemb: no of bloc of memory
 * @size: size of element (int)
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	size_t i;

	if (nmeb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
