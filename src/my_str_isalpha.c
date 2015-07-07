/*
** my_str_isalpha.c for my_str_isalpha in /home/pirou_g/Piscine/Piscine_C_J06
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Mon Oct  6 15:24:21 2014 Guillaume Pirou
** Last update Mon Oct 20 14:31:31 2014 Guillaume Pirou
*/

#include <stdlib.h>

int	my_str_isalpha(char *str)
{
  int	lp;

  if (str == NULL)
    return (1);
  lp = 0;
  while (str[lp] != '\0')
    {
      if ((str[lp] >= 0 && str[lp] < 65) || (str[lp] > 90 && str[lp] < 97) ||
	  (str[lp] > 122))
	return (0);
      ++lp;
    }
  return (1);
}
