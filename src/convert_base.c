/*
** convert_base.c for convert_base in /home/pirou_g/Piscine/Piscine_C_J08/ex_02
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Wed Oct  8 09:24:59 2014 Guillaume Pirou
** Last update Mon Oct 20 21:29:10 2014 Guillaume Pirou
*/

#include "../include/my.h"

char	*convert_base(char *nbr, char *base_from, char *base_to)
{
  int	nb;
  char	*tab;

  nb = my_getnbr_base(nbr, base_from);
  tab = (char *)my_strnbr(nb, base_to);
  return (tab);
}
