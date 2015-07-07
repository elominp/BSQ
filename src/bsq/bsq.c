/*
** bsq.c for bsq in /home/pirou_g/a rendre bsq/bsq/src/bsq
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Jan 18 19:59:44 2015 Guillaume Pirou
** Last update Sun Jan 18 19:59:45 2015 Guillaume Pirou
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../../include/bsq.h"
#include "../../include/my_printf.h"
#include "../../include/my.h"
#include "../../include/file.h"

void	my_putchar2(char c)
{
  write(2, &c, 1);
}

void	my_putstr2(char *str)
{
  if (str != NULL)
    write(2, str, my_strlen(str));
}

void	bsq(t_map *map)
{
  long	i;

  if (map == NULL)
    return;
  i = -1;
  bruteforce(map);
  my_dispmap(map);
  while (++i < map->row)
    free(map->map[i]);
  free(map->map);
}

void	my_dispfile(char *path)
{
  t_fle	*file;
  char	buff[4097];
  int	i;

  if (path == NULL || (file = my_fopen(path, O_RDONLY)) == NULL)
    return;
  while ((i = my_fread(file, buff, 10)) > 0)
    {
      buff[i] = '\0';
      my_printf("%s", buff);
    }
}

int	main(int argc, char **argv)
{
  int	i;
  t_map	*map;
  t_ram	ramdata;

  i = 0;
  if (argc < 2)
    return (0);
  get_raminfo(&ramdata);
  while (++i < argc)
    {
      if ((map = get_bsqmap(argv[i], &ramdata)) != NULL)
	bsq(map);
      else
	disp_example();
    }
  return (0);
 }
