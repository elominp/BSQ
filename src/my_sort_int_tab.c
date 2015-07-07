/*
** my_sort_int_tab.c for my_sort_int_tab in /home/pirou_g/Piscine/Piscine_C_J04
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Thu Oct  2 11:37:03 2014 Guillaume Pirou
** Last update Mon Oct 20 14:26:35 2014 Guillaume Pirou
*/

#include "../include/my.h"

int	*the_litlest(int *tab, int size, int pos)
{
  int	loop;
  int	*var;
  int	var2;

  loop = 0 + pos;
  var2 = 2147483647;
  var = &var2;
  while (loop < size)
    {
      if (tab[loop] < *var)
	var = &tab[loop];
      ++loop;
    }
  return (var);
}

void	my_sort_int_tab(int *tab, int size)
{
  int	loop;
  int	*v2;

  loop = 0;
  while (loop < size)
    {
      v2 = the_litlest(tab, size, loop);
      my_swap(&tab[loop], v2);
      ++loop;
    }
}
