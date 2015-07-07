/*
** my_strncat.c for my_strncat in /home/pirou_g/Piscine/Piscine_C_J07/ex_01
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Tue Oct  7 13:45:09 2014 Guillaume Pirou
** Last update Tue Oct  7 14:32:57 2014 Guillaume Pirou
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	ct;
  int	lp;

  ct = -1;
  while (dest[++ct] != '\0');
  lp = 0;
  while (src[lp] != '\0' && lp < nb)
  {
    dest[lp + ct] = src[lp];
    ++lp;
  }
  dest[lp + ct] = '\0';
  return (dest);
}
