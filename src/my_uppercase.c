/*
** my_uppercase.c for my_printf in /run/media/pirou_g/USB/PSU_2014_my_printf/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Nov 16 20:39:21 2014 Guillaume Pirou
** Last update Sun Nov 16 20:39:23 2014 Guillaume Pirou
*/

#include <stdlib.h>
#include "../include/my.h"

char	*my_uppercase(char *temp)
{
  int	i;
  char	*buff;

  if (temp == NULL)
    return (NULL);
  if ((buff = my_strdup(temp)) == NULL)
    return (NULL);
  i = -1;
  while (buff[++i] != '\0')
    {
      if (buff[i] >= 'a' && buff[i] <= 'z')
	buff[i] -= 32;
    }
  buff[i] = '\0';
  return (buff);
}
