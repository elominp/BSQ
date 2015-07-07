/*
** my_putptr.c for my_printf in /run/media/pirou_g/USB/PSU_2014_my_printf/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Nov 16 20:38:08 2014 Guillaume Pirou
** Last update Sun Nov 16 20:38:09 2014 Guillaume Pirou
*/

#include <stdlib.h>
#include <stdarg.h>
#include "../include/my_printf.h"
#include "../include/my.h"

int	my_ptrprintnbr(unsigned long nb, char *base, unsigned int bs)
{
  if (nb < bs)
    {
      my_putchar(base[nb]);
      return (0);
    }
  my_printnbr(nb / bs, base, bs);
  my_putchar(base[nb % bs]);
  return (0);
}

int	my_putptr(unsigned long nbr)
{
  if (nbr == 0)
    {
      my_putchar('0');
      return (0);
    }
  my_putstr("0x");
  my_printnbr(nbr, "0123456789abcdef", 16);
  return (0);
}
