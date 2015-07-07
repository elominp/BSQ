/*
** checks_bsq.c for bsq in /home/pirou_g/a rendre bsq/bsq/src/bsq
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Jan 18 20:00:08 2015 Guillaume Pirou
** Last update Sun Jan 18 20:00:09 2015 Guillaume Pirou
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../../include/bsq.h"
#include "../../include/my.h"
#include "../../include/file.h"

int	check_col_loop(t_fle *file, char *buff, long n_col, long i)
{
  long	n;
  long	j;

  if (file == NULL || buff == NULL)
    return (0);
  n = 0;
  while ((j = my_fread(file, buff, 4096)) > 0)
    {
      buff[j] = '\0';
      i = -1;
      n = (n == n_col) ? 0 : n;
      while (buff[++i] != '\0')
	{
	  n = (buff[i] != '\n') ? n + 1 : n;
	  if (buff[i] == '\n' && n != n_col && buff[i - 1] != '\0')
	    {
	      my_putstr2("Error : invalid number of columns in a row\n");
	      my_fclose(file);
	      return (0);
	    }
	  n = (buff[i] == '\n') ? 0 : n;
	}
    }
  my_fclose(file);
  return (n_col);
}

int	check_col(char *path)
{
  long	n_col;
  long	j;
  char	buff[4097];
  t_fle	*file;

  if (path == NULL || (file = my_fopen(path, O_RDONLY)) == NULL)
    return (0);
  while ((j = my_fread(file, buff, 1)) > 0 && buff[0] != '\n');
  n_col = 0;
  while ((j = my_fread(file, buff, 1)) > 0 && buff[0] != '\n')
    ++n_col;
  if (j == 0)
    return (0);
  return (check_col_loop(file, buff, n_col, 0));
}

int	check_row(char *path)
{
  long	n_row;
  long	n;
  long	i;
  long	j;
  t_fle	*file;
  char	buff[4097];

  if (path == NULL || (file = my_fopen(path, O_RDONLY)) == NULL)
    return (0);
  n_row = my_fgeti(file);
  n = 0;
  while ((j = my_fread(file, buff, 4096)) > 0)
    {
      buff[j] = '\0';
      i = -1;
      while (buff[++i] != '\0' && i < j)
	n = (buff[i] == '\n') ? n + 1 : n;
    }
  my_fclose(file);
  if (n == n_row)
    return (n_row);
  my_putstr2("Error : number of rows don't match with the given number\n");
  return (0);
}

int	check_chars(char *path)
{
  int	fd;
  int	i;
  int	j;
  char	buff[4097];

  if ((path == NULL) || (fd = open(path, O_RDONLY)) < 0)
    return (0);
  while (read(fd, buff, 1) > 0 && buff[0] != '\n');
  while ((j = read(fd, buff, 4096)) > 0)
    {
      i = -1;
      buff[j] = '\0';
      while (++i < 4096 && buff[i] != '\0')
	{
	  if (buff[i] != '.' && buff[i] != 'o' && buff[i] != '\n' &&
	      buff[i] != '\0')
	    {
	      my_putstr2("Error : an invalid caracter was found\n");
	      close(fd);
	      return (0);
	    }
	}
    }
  close(fd);
  return (1);
}

int	bsq_checks(char *path, t_map *map)
{
  if (path == NULL || map == NULL || !check_chars(path) ||
      !(map->row = check_row(path)) || !(map->col = check_col(path)))
    return (0);
  return (1);
}
