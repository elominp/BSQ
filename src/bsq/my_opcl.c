/*
** my_opcl.c for bsq in /home/pirou_g/a rendre bsq/bsq/src/bsq
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Jan 18 20:01:27 2015 Guillaume Pirou
** Last update Sun Jan 18 20:01:28 2015 Guillaume Pirou
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../../include/my.h"
#include "../../include/file.h"

int	my_fclose(t_fle *file)
{
  if (file == NULL)
    return (0);
  free(file->name);
  if (close(file->fd) < 0)
    return (0);
  free(file);
  return (1);
}

int	is_dir(char *path)
{
  int	fd;

  if (path == NULL)
    return (0);
  if ((fd = open(path, O_RDONLY | O_DIRECTORY)) < 0)
    {
      close(fd);
      return (0);
    }
  close(fd);
  my_putstr2("Error : input is a folder\n");
  return (1);
}

t_fle	*my_fopen(char *name, int mode)
{
  t_fle	*out;

  if (name == NULL || (out = malloc(sizeof(t_fle))) == NULL || is_dir(name))
    return (NULL);
  if ((out->name = my_strdup(name)) == NULL || (out->fd = open(name, mode)) < 0)
    return (NULL);
  out->fmode = mode;
  out->csr = 0;
  out->buff[0] = '\0';
  out->status = NEOF;
  return (out);
}
