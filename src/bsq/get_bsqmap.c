/*
** get_bsqmap.c for bsq in /home/pirou_g/a rendre bsq/bsq/src/bsq
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Jan 18 20:00:23 2015 Guillaume Pirou
** Last update Sun Jan 18 20:00:24 2015 Guillaume Pirou
*/

#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/file.h"
#include "../../include/bsq.h"

long	oc(int unit)
{
  if (unit == BYTE)
    return (1);
  else if (unit == KBYTE)
    return (1024);
  else if (unit == MBYTE)
    return (1024 * 1024);
  else if (unit == GBYTE)
    return (1024 * 1024 * 1024);
  else
    return (0);
}

t_map	*get_bsqmap(char *path, t_ram *ram)
{
  t_map	*map;
  long	size;

  if (path == NULL || (map = malloc(sizeof(t_map))) == NULL || ram == NULL ||
      (size = my_fgetsize(path)) > ((ram->memavailable * oc(ram->unit)) / 2) ||
      size < 0 || !bsq_checks(path, map) ||
      (map->map = malloc(sizeof(char *) * (map->row + 1))) == NULL)
    {
      if (size > ((ram->memavailable * oc(ram->unit)) / 2))
	my_putstr2("Error : not enough ram to load the file\n");
      return (NULL);
    }
  if (my_read_map(map, path))
    return (map);
  return (NULL);
}
