/*
** my_is_prime.c for my_is_prime in /home/pirou_g/Piscine/Piscine_C_J05
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Fri Oct  3 14:21:26 2014 Guillaume Pirou
** Last update Fri Oct  3 14:24:34 2014 Guillaume Pirou
*/

int	my_is_prime(int nb)
{
  int	i;

  i = 2;
  if (nb < 2)
    return (0);
  else
    {
      while (i < nb)
	{
	  if (nb % i == 0)
	    return (0);
	  ++i;
	}
      return (1);
    }
}
