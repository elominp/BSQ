/*
** my_fgetsize.c for bsq in /home/pirou_g/a rendre bsq/bsq/src/bsq
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Jan 18 20:01:09 2015 Guillaume Pirou
** Last update Sun Jan 18 20:01:10 2015 Guillaume Pirou
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

long	my_fgetsize(char *path)
{
  long	i;
  int	j;
  int	fd;
  char	buff[4096];

  if (path == NULL)
    return (-1);
  i = 0;
  if ((fd = open(path, O_RDONLY)) < 0)
    return (-1);
  while ((j = read(fd, buff, 4096)) > 0)
    i += j;
  close(fd);
  return (i);
}
