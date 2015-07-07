/*
** my_strdup.c for my_strdup in /home/pirou_g/Piscine/Piscine_C_J08/ex_01
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Wed Oct  8 08:59:37 2014 Guillaume Pirou
** Last update Thu Jan 15 17:51:47 2015 guigui
*/

#include <stdlib.h>
#include "../include/my.h"

char	*my_strdup(char *src)
{
  int	len;
  int	lp;
  char	*dest;

  len = my_strlen(src);
  lp = 0;
  if ((dest = malloc(len + 1)) == NULL)
      return (NULL);
  while (lp < len)
    {
      dest[lp] = src[lp];
      ++lp;
    }
  dest[lp] = '\0';
  return (dest);
}
