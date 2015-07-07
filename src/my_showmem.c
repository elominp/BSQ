/*
** my_showmem.c for my_showmem in /home/pirou_g/Piscine/Piscine_C_J06
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Tue Oct  7 10:49:45 2014 Guillaume Pirou
** Last update Mon Oct 20 14:25:24 2014 Guillaume Pirou
*/

#include "../include/my.h"

void	my_print_b_16(unsigned long vl, int nbc)
{
  while (vl / (my_power_it(16, nbc)) == 0)
    {
      my_putchar('0');
      --nbc;
    }
  my_putnbr_base(vl, "0123456789abcdef");
}

void		my_show_row(char *str, int beg, int len)
{
  unsigned long	my_adr;
  int		lp;

  my_adr = (unsigned long)&str[beg];
  my_print_b_16(my_adr, 8);
  lp = 0;
  my_putstr(": ");
  while (lp < 16)
    {
      if (lp > len)
	my_putstr("0000");
      else
	{
	  my_print_b_16((unsigned long)&str[beg + lp], 2);
	  my_print_b_16((unsigned long)&str[beg + lp + 1], 2);
	}
      my_putchar(' ');
      lp += 2;
    }
}

int	my_showmem(char *str, int size)
{
  str[0] += 48;
  size--;
  return (0);
}
