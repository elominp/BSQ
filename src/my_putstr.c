/*
** my_putstr.c for my_putstr in /home/pirou_g/Piscine/Piscine_C_J04
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Fri Oct  3 22:11:10 2014 Guillaume Pirou
** Last update Wed Oct 22 13:25:57 2014 Guillaume Pirou
*/

#include <unistd.h>
#include "../include/my.h"

int	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
  return (0);
}
