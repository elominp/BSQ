/*
** my_printf.c for my_printf in /run/media/pirou_g/USB/PSU_2014_my_printf/src
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Nov 16 20:37:44 2014 Guillaume Pirou
** Last update Sun Nov 16 20:37:44 2014 Guillaume Pirou
*/

#include <stdlib.h>
#include <stdarg.h>
#include "../include/my_printf.h"
#include "../include/my.h"

int		my_printf(const char *format, ...)
{
  int		i;
  va_list	list;
  int		cp;

  if (format == NULL)
    return (-1);
  i = -1;
  va_start(list, format);
  while (format[++i] != '\0')
    {
      if (format[i] != '%')
	my_putchar(format[i]);
      else
	{
	  cp = i;
	  i += my_parse_format(format + i, &list);
	  if (i < cp)
	    return (-1);
	}
    }
  va_end(list);
  return (0);
}
