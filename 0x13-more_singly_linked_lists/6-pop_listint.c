#include "lists.h"
int pop_listint(listint_t **head)
{
  listint_t *tmp;
  int ret;

  if (*head == NULL)
    return (0);

  tmp = *head;
  ret = (*head)->n;
  *head = (*head)->next;

  free(tmp);

  return (ret);
}
© 2022 GitHub, Inc.
