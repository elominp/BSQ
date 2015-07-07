/*
** my_find_prime_sup.c for my_find_prime_sup in /home/pirou_g/Piscine/Piscine_C_J05
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Fri Oct  3 15:19:38 2014 Guillaume Pirou
** Last update Mon Oct 20 14:17:49 2014 Guillaume Pirou
*/

#include "../include/my.h"

int my_find_prime_sup(int nb)
{
  if (nb < 2)
    nb = 2;
  while (!my_is_prime(nb))
    ++nb;
  return (nb);
}
