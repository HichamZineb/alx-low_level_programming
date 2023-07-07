#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element;
	char *value_dup;
	unsigned long int index, i;

	if (!ht || !key || !*key || !value)
		return (0);

	value_dup = strdup(value);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_dup;
			return (1);
		}
	}
	element = malloc(sizeof(hash_node_t));

	if (!element)
	{
		free(value_dup);
		return (0);
	}
	element->key = strdup(key);

	if (!element->key)
	{
		free(element);
		return (0);
	}
	element->value = value_dup;
	element->next = ht->array[index];
	ht->array[index] = element;

	return (1);
}
