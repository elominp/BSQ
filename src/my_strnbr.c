/*
** my_strnbr.c for my_strnbr in /home/pirou_g/Piscine/Piscine_C_J08/ex_02
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Thu Oct  9 10:34:43 2014 Guillaume Pirou
** Last update Mon Oct 20 14:34:03 2014 Guillaume Pirou
*/

#include <stdlib.h>
#include "../include/my.h"

char	*my_strnbr_b(int nbr, char *tab, char *base, int bs)
{
  int	lp;
  int	len;
  int	sg;

  lp = 0;
  sg = (nbr < 0) ? -1 : 0;
  nbr = (nbr < 0) ? nbr * -1 : nbr;
  len = my_countnb_b(nbr, bs);
  len = (sg  < 0) ? len + 1 : len;
  while (lp < len)
    {
      tab[len - lp - 1] = base[nbr % bs];
      nbr /= bs;
      ++lp;
    }
  tab[lp] = '\0';
  tab[0] = (sg < 0) ? '-' : tab[0];
  return (tab);
}

char	*my_strnbr(int nbr, char *base)
{
  char	*tab;

  if (nbr == 0)
    return ("0");
  if (nbr < 0)
    {
      tab = malloc(sizeof(tab) * my_countnb_b(nbr, my_strlen(base)) + 1);
      if (tab == NULL)
	return (NULL);
      tab[0] = '-';
      tab = my_strnbr_b(nbr, tab + 1, base, my_strlen(base));
    }
  else
    {
      tab = malloc(sizeof(tab) * my_countnb_b(nbr, my_strlen(base)));
      if (tab == NULL)
	return (NULL);
      tab = my_strnbr_b(nbr, tab, base, my_strlen(base));
    }
  return (tab);
}
