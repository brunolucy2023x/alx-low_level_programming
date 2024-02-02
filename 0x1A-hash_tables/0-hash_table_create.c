#include "hash_tables.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *  Bruno Owino.
 *  brunookoth44@gmail.com
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
