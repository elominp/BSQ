/*
** my_strupcase.c for my_strupcase in /home/pirou_g/Piscine/Piscine_C_J06
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Mon Oct  6 13:29:09 2014 Guillaume Pirou
** Last update Mon Oct  6 13:34:42 2014 Guillaume Pirou
*/

char	*my_strupcase(char *str)
{
  int	lp;

  lp = 0;
  while (str[lp] != '\0')
    {
      if (str[lp] >= 97 && str[lp] <= 122)
	str[lp] -= 32;
      ++lp;
    }
  return (str);
}
