/*
** my_read_map.c for bsq in /home/pirou_g/a rendre bsq/bsq/src/bsq
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Jan 18 20:01:35 2015 Guillaume Pirou
** Last update Sun Jan 18 20:01:36 2015 Guillaume Pirou
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../../include/bsq.h"
#include "../../include/my.h"
#include "../../include/file.h"

int	my_read_map(t_map *map, char *path)
{
  int	i;
  int	j;
  char	*buffer;
  char	buff2[2];
  t_fle	*file;

  if (map == NULL || path == NULL || (buffer = malloc(map->col + 1)) == NULL ||
      (file = my_fopen(path, O_RDONLY)) == NULL)
    return (0);
  while (my_fread(file, buffer, 1) > 0 && buffer[0] != '\n');
  i = -1;
  while (++i < map->row)
    {
      if ((j = my_fread(file, buffer, map->col)) <= 0 ||
	  my_fread(file, buff2, 1) <= 0)
	{
	  my_fclose(file);
	  return (0);
	}
      buffer[j] = '\0';
      if ((map->map[i] = my_strdup(buffer)) == NULL)
	{
	  my_fclose(file);
	  return (0);
	}
    }
  return (1);
}
