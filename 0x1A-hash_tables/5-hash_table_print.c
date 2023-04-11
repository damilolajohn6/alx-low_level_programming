#include <stdio.h>
#include <stdbool.h>
#include "hash_tables.h"

/**
 * hash_table_print - print a hashtable
 * @ht: always void
 */
void hash_table_print(const hash_table_t *hash_t)
{

	unsigned long i;
	hash_node_t *tmp;
	bool flag;

	flag = false;

	if (hash_t == NULL)
		return;

	printf("{");
	for (i = 0; i < hash_t->size; i++)
	{

		if (hash_t->array != NULL)
		{
			tmp = hash_t->array[i];
			while (tmp != NULL)
			{
				if (flag == true)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				flag = true;
			}
		}
	}
	printf("}\n");
}
