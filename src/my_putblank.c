/*
** my_putblank.c for my_printf in /run/media/pirou_g/USB/PSU_2014_my_printf/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Nov 16 20:38:55 2014 Guillaume Pirou
** Last update Sun Nov 16 20:38:56 2014 Guillaume Pirou
*/

#include "../include/my.h"

void	my_putblank(int nb)
{
  int	i;

  i = -1;
  if (nb < 0)
    return;
  while (++i < nb)
    my_putchar(' ');
}

void	my_putzero(int nb)
{
  int	i;

  i = -1;
  if (nb < 0)
    return;
  while (++i < nb)
    my_putchar('0');
}
