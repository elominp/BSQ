/*
** my_strcpy.c for my_strcpy in /home/pirou_g/Piscine/Piscine_C_J06
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Mon Oct  6 08:50:41 2014 Guillaume Pirou
** Last update Mon Oct  6 08:53:59 2014 Guillaume Pirou
*/

char	*my_strcpy(char *dest, char *src)
{
  int	lp;

  lp = 0;
  while (src[lp] != '\0')
    {
      dest[lp] = src[lp];
      ++lp;
    }
  dest[lp] = '\0';
  return (dest);
}
