/*
** my_revstr.c for my_revstr in /home/pirou_g/Piscine/Piscine_C_J06
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Mon Oct  6 09:30:50 2014 Guillaume Pirou
** Last update Mon Oct 20 14:22:02 2014 Guillaume Pirou
*/

#include "../include/my.h"

char	*my_revstr(char *str)
{
  int	len;
  int	lp;
  char	cp;

  len = my_strlen(str);
  my_put_nbr(len);
  lp = 0;
  while (lp < (len / 2))
    {
      cp = str[lp];
      str[lp] = str[len - lp - 1];
      str[len - lp - 1] = cp;
      ++lp;
    }
  return (str);
}
