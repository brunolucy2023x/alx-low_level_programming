/*
 * File: 0-print_list.c
 * Codist: Bruno O Okoth
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in z.
 */

size_t print_list(const list_t *z)
{
	size_t nodes = 0;

	while (z)
	{
		if (z->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", z->len, z->str);

		nodes++;
		z = z->next;
	}

	return (nodes);
}
