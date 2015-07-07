/*
** my_strlowcase.c for my_strlowcase in /home/pirou_g/Piscine/Piscine_C_J06
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Mon Oct  6 13:37:44 2014 Guillaume Pirou
** Last update Mon Oct  6 13:40:38 2014 Guillaume Pirou
*/

char	*my_strlowcase(char *str)
{
  int   lp;

  lp = 0;
  while (str[lp] != '\0')
    {
      if (str[lp] >= 65 && str[lp] <= 90)
        str[lp] += 32;
      ++lp;
    }
  return (str);
}
