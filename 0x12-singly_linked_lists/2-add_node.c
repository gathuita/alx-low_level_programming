#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list.
 *
 * @head: Pointer to first node.
 * @str: New node.
 *
 * Return: Address of new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(newNode);
		return (NULL);
	}

	for (len = 0; str[len]; )
		len++;

	newNode->str = dup;
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
