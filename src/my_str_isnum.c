/*
** my_str_isnum.c for my_isnum in /home/pirou_g/Piscine/Piscine_C_J06
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Mon Oct  6 15:58:43 2014 Guillaume Pirou
** Last update Fri Jan 16 12:38:11 2015 guigui
*/

#include <stdlib.h>

int	my_isnum(char c)
{
  if (c == '-' || c == '+' || (c >= '0' && c <= '9'))
    return (1);
  return (0);
}

int	my_str_isnum(char *str)
{
  int	lp;

  if (str == NULL)
    return (1);
  lp = 0;
  while (str[lp] != '\0')
    {
      if (str[lp] < 48 || str[lp] > 57)
	return (0);
      ++lp;
    }
  return (1);
}
