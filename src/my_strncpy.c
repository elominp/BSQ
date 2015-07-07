/*
** my_strncpy.c for my_strncpy in /home/pirou_g/Piscine/Piscine_C_J06
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Mon Oct  6 09:11:57 2014 Guillaume Pirou
** Last update Mon Oct  6 09:26:18 2014 Guillaume Pirou
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	lp;

  lp = 0;
  while (lp < n && src[lp] != '\0')
    {
      dest[lp] = src[lp];
      ++lp;
    }
  if (lp < n)
    dest[lp] = '\0';
  return (dest);
}
