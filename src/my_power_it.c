/*
** my_power_it.c for my_power_it in /home/pirou_g/Piscine/Piscine_C_J05
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Fri Oct  3 10:00:35 2014 Guillaume Pirou
** Last update Fri Oct  3 16:06:25 2014 Guillaume Pirou
*/

int		my_power_it(int nb, int power)
{
  int		loop;
  int		cp_nb;
  long int	res;

  loop = 1;
  cp_nb = nb;
  res = nb;
  if (power == 1)
    return (nb);
  if (power == 0)
    return (1);
  if (power < 0)
    return (0);
  while (loop < power)
    {
      res *= cp_nb;
      if (res > 2147483647)
	return (0);
      ++loop;
    }
  return (res);
}
