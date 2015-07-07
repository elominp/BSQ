/*
** my_str_isupper.c for my_is_upper in /home/pirou_g/Piscine/Piscine_C_J06
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Mon Oct  6 17:25:20 2014 Guillaume Pirou
** Last update Mon Oct 20 14:33:37 2014 Guillaume Pirou
*/

#include <stdlib.h>

int	my_str_isupper(char *str)
{
  int	lp;

  if (str == NULL)
    return (1);
  lp = 0;
  while (str[lp] != '\0')
    {
      if (str[lp] < 65 || str[lp] > 90)
	return (0);
      ++lp;
    }
  return (1);
}
