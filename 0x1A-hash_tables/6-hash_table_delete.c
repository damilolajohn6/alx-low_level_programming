#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete a hashtable
 * @ht: the hashtable to delete
 */
void hash_table_delete(hash_table_t *hash_t)
{
	unsigned long i;
	hash_node_t *tmp;
	hash_node_t *tmpn;

	for (i = 0; i < hash_t->size; i++)
	{
		if (hash_t->array[i] != NULL)
		{
			tmp = hash_t->array[i];
			while (tmp != NULL)
			{
				tmpn = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = tmpn;
			}
		}
	}
		free(ht->array);
	free(hash_t);

}
