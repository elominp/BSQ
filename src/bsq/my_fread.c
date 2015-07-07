/*
** my_fread.c for bsq in /home/pirou_g/a rendre bsq/bsq/src/bsq
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Jan 18 20:01:19 2015 Guillaume Pirou
** Last update Sun Jan 18 20:01:20 2015 Guillaume Pirou
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../../include/my.h"
#include "../../include/file.h"

int	my_fbuffncpy(char *buff, char *dest, int n)
{
  int	i;

  i = -1;
  if (buff == NULL || dest == NULL || n <= 0)
    return (-1);
  while (buff[++i] != '\0' && i < n)
    dest[i] = buff[i];
  return (i);
}

int	my_fread(t_fle *file, char *dest, int n)
{
  int	i;
  int	j;
  int	z;

  if (file == NULL || dest == NULL || n <= 0)
    return (0);
  i = 0;
  while (i < n && file->status != EOF)
    {
      if (file->status == EOF)
	return (0);
      z = my_fbuffncpy(file->buff + file->csr, dest + i, n - i);
      i += z;
      file->csr += z;
      if (file->csr >= BUFF_SZ || file->buff[0] == '\0' || z == 0)
	{
	  if (file->status != EOF &&
	      (j = read(file->fd, file->buff, BUFF_SZ)) == 0)
	    file->status = EOF;
	  else
	    file->csr = 0;
	  file->buff[j] = '\0';
	}
    }
  return (i);
}
