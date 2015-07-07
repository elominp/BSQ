/*
** my_fdup.c for bsq in /home/pirou_g/a rendre bsq/bsq/src/bsq
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Jan 18 20:00:41 2015 Guillaume Pirou
** Last update Sun Jan 18 20:00:42 2015 Guillaume Pirou
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../../include/my_printf.h"

int	my_fdup(char *path, char *npath)
{
  int	fdf1;
  int	fdf2;
  char	buff[4096];
  int	i;

  if (path == NULL || npath == NULL || (fdf1 = open(path, O_RDONLY)) < 0 ||
      (fdf2 = open(npath, O_CREAT | O_WRONLY)) < 0)
    {
      my_printf("fdf1 = %d\nfdf2 = %d\n", fdf1, fdf2);
      return (0);
    }
  while ((i = read(fdf1, buff, 4096)) > 0)
    {
      if (write(fdf2, buff, i) < 0)
	return (0);
    }
  return (1);
}
