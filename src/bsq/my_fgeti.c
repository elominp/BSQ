/*
** my_fgeti.c for bsq in /home/pirou_g/a rendre bsq/bsq/src/bsq
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Jan 18 20:00:51 2015 Guillaume Pirou
** Last update Sun Jan 18 20:00:52 2015 Guillaume Pirou
*/

#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/file.h"

int	my_fgeti(t_fle *file)
{
  int	i;
  int	j;
  char	buff[12];

  i = 0;
  if (file == NULL)
    return (0);
  while ((j = my_fread(file, buff + i, 1)) > 0 && my_isnum(buff[i]) && i++ < 11)
    buff[i + j] = '\0';
  return (my_atoi(buff));
}
