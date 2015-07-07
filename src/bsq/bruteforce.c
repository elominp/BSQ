/*
** bruteforce.c for bsq in /home/pirou_g/a rendre bsq/bsq/src/bsq
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Jan 18 19:59:28 2015 Guillaume Pirou
** Last update Sun Jan 18 19:59:29 2015 Guillaume Pirou
*/

#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/file.h"
#include "../../include/bsq.h"

int	search_one_sq(t_map *map, long sz, long x, long y)
{
  long	i;
  long	j;

  if (map == NULL)
    return (0);
  i = x - 1;
  while (++i < (x + sz))
    {
      j = y - 1;
      while (++j < (y + sz))
	{
	  if (map->map[i][j] != '.')
	    return (0);
	}
    }
  return (1);
}

int	search_square(t_map *map, t_sqr *sqr, long sq)
{
  long	i;
  long	j;

  if (map == NULL || sqr == NULL)
    return (0);
  i = -1;
  while ((++i + sq) < map->row)
    {
      j = -1;
      while ((++j + sq) < map->col)
	{
	  if (search_one_sq(map, sq, i, j))
	    {
	      sqr->x = i;
	      sqr->y = j;
	      sqr->size = sq;
	      return (1);
	    }
	}
    }
  return (0);
}

void	set_square(t_map *map, t_sqr *sqr)
{
  long	i;
  long	j;

  if (map == NULL || sqr == NULL)
    return;
  i = sqr->x - 1;
  while (++i < (sqr->x + sqr->size))
    {
      j = sqr->y - 1;
      while (++j < (sqr->y + sqr->size))
	map->map[i][j] = 'X';
    }
}

long	my_get_bgst(t_map *map)
{
  if (map == NULL)
    return (0);
  if (map->row == map->col)
    return (map->row);
  else if (map->row < map->col)
    return (map->row);
  else
    return (map->col);
}

void	bruteforce(t_map *map)
{
  long	bgst;
  t_sqr	square;

  if (map == NULL || (bgst = my_get_bgst(map)) <= 0)
    return;
  while (bgst > 0)
    {
      if (!search_square(map, &square, bgst))
	--bgst;
      else
	{
	  set_square(map, &square);
	  return;
	}
    }
}
