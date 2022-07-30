#include "hash_tables.h"

/**
 * hash_table_set - Adds element to hash table.
 *
 * @ht: The hash table to add or update key/value to.
 * @key: The key.
 * @value: The value associated with @key.
 *
 * Return: I on Success and 0 if otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash;
	char *dupval;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	dupval = strdup(value);
	if (dupval == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = dupval;
			return (1);
		}
	}

	hash = malloc(sizeof(hash_node_t));
	if (hash == NULL)
	{
		free(dupval);
		return (0);
	}
	hash->key = strdup(key);
	if (hash->key == NULL)
	{
		free(hash);
		return (0);
	}
	hash->value = dupval;
	hash->next = ht->array[index];
	ht->array[index] = hash;

	return (1);
}
