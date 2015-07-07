/*
** my_get_el.c for my_get_el in /home/pirou_g/Piscine/Piscine_C_J08/lib/my
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Thu Oct  9 14:51:17 2014 Guillaume Pirou
** Last update Thu Oct  9 14:51:43 2014 Guillaume Pirou
*/

int     my_get_el(char c, char *base)
{
  int   lp;

  lp = 0;
  while (base[lp] != '\0')
    {
      if (c == base[lp])
        return (lp);
      ++lp;
    }
  return (-1);
}
