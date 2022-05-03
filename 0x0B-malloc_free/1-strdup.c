#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
  int i = 0, j, k = 0;
  char *newStr = NULL;

  while (str[k] != '\0')
    {
      i++;
      k++;
    }

  newStr = malloc(sizeof(char) * (i + 1));

  if (str == NULL)
    return (NULL);

  for (j = 0; j <= i; j++)
    newStr[j] = str[j];

  return (newStr);
}
