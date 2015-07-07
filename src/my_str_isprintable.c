/*
** my_str_isprintable.c for my_str_isprintable in /home/pirou_g/Piscine/Piscine_C_J06
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Mon Oct  6 17:29:18 2014 Guillaume Pirou
** Last update Mon Oct 20 14:33:14 2014 Guillaume Pirou
*/

#include <stdlib.h>

int	my_str_isprintable(char *str)
{
  int	lp;

  if (str == NULL)
    return (1);
  lp = 0;
  while (str[lp] != '\0')
    {
      if (str[lp] < 32 || str[lp] > 126)
	return (0);
      ++lp;
    }
  return (1);
}
