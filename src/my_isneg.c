/*
** my_isneg.c for my_isneg in /home/pirou_g/Piscine/Piscine_C_J03/Piscine_C_J03
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Wed Oct  1 15:36:23 2014 Guillaume Pirou
** Last update Mon Oct 20 14:18:34 2014 Guillaume Pirou
*/

#include "../include/my.h"

int my_isneg(int n)
{
  if (n < 0)
    my_putchar('N');
  else
    my_putchar('P');
  my_putchar('\n');
  return (0);
}
