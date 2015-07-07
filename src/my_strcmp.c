/*
** my_strcmp.c for my_strcmp in /home/pirou_g/Piscine/Piscine_C_J06
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Mon Oct  6 10:10:57 2014 Guillaume Pirou
** Last update Mon Oct 20 18:39:55 2014 Guillaume Pirou
*/

#include "../include/my.h"

int	my_strcmp(char *s1, char *s2)
{
  while (*s1 != '\0' && *s2 != '\0' && (*s1++ == *s2++));
  s1--;
  s2--;
  if (*s1 < *s2)
    return (-1);
  else if (*s1 == *s2)
    {
      if (my_strlen(s1) < my_strlen(s2))
	return (-1);
      else if (my_strlen(s1) > my_strlen(s2))
	return (1);
      else
	return (0);
    }
  else
    return (1);
}
