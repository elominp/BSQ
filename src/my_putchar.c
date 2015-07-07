/*
** my_putchar.c for my_putchar in /home/pirou_g/Piscine/Piscine_C_J11/lib/my
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Mon Oct 20 14:19:02 2014 Guillaume Pirou
** Last update Mon Oct 20 14:20:39 2014 Guillaume Pirou
*/

#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}
