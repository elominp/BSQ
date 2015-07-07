/*
** my_put_nbr.c for my_put_nbr in /home/pirou_g/Piscine/Piscine_C_J03/Piscine_C_J03
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Wed Oct  1 14:24:24 2014 Guillaume Pirou
** Last update Mon Oct 20 21:39:01 2014 Guillaume Pirou
*/

#include "../include/my.h"

int	my_pow(int nb, int pw)
{
  int	loop;
  int	cp_nb;

  loop = 1;
  cp_nb = nb;
  while (loop < pw)
    {
      nb *= cp_nb;
      ++loop;
    }
  return (nb);
}

int	my_count_nb(int nb)
{
  int	loop;
  int	count;

  loop = 0;
  count = 0;
  while (!loop)
    {
      if (nb == 0 || nb == -1)
	++loop;
      else
	{
	  nb /= 10;
	  ++count;
	}
    }
  return (count);
}

int	my_put_nbr(int nb)
{
  my_putnbr_base(nb, "0123456789");
  my_putchar('\n');
  return (0);
}
