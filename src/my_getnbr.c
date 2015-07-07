/*
** my_getnbr.c for my_getnbr in /home/pirou_g/Piscine/Piscine_C_J04
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Thu Oct  2 10:47:32 2014 Guillaume Pirou
** Last update Fri Oct  3 22:14:24 2014 Guillaume Pirou
*/

int		my_string_to_int(char *str, int beg)
{
  int		loop;
  long int	nb;

  loop = beg;
  while (str[loop] != '\0')
    {
      if (loop == beg)
        nb = str[loop] - 48;
      else if (str[loop] == '0')
        nb *= 10;
      else if (!(str[loop] > 47 && str[loop] < 58))
        return (nb);
      else
        {
          nb *= 10;
          nb += (str[loop] - 48);
        }
      if ((beg == 1 && nb > 2147483648) || (beg == 0 && nb > 2147483647))
	return (0);
      ++loop;
    }
  return (nb);
}

int	my_getnbr(char *str)
{
  int	nb;
  int	begin;

  if (str[0] == '-')
    begin = 1;
  else
    begin = 0;
  nb = my_string_to_int(str, begin);
  if (str[0] == '-')
    nb *= -1;
  return (nb);
}
