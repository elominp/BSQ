/*
** bsq_disp.c for bsq in /home/pirou_g/a rendre bsq/bsq/src/bsq
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Jan 18 19:59:53 2015 Guillaume Pirou
** Last update Sun Jan 18 19:59:54 2015 Guillaume Pirou
*/

#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/bsq.h"
#include "../../include/my_printf.h"

void	my_dispmap(t_map *map)
{
  int	i;

  if (map == NULL)
    return;
  i = -1;
  while (++i < map->row)
    my_printf("%s\n", map->map[i]);
}

void	disp_example()
{
  my_putstr2("A valid file map begin with the correct number of rows of the ");
  my_putstr2("map and each rows have the same length.\nEach elements of the ");
  my_putstr2("map are '.' or 'o'.\nIf any other caracters are found, the map ");
  my_putstr2("is considered as wrong and is not executed.\n");
}
