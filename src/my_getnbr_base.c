/*
** my_getnbr_base.c for my_getbr_base in /home/pirou_g/Piscine/Piscine_C_J08
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Wed Oct  8 18:53:25 2014 Guillaume Pirou
** Last update Mon Oct 20 22:20:20 2014 Guillaume Pirou
*/

#include "../include/my.h"

int	my_check(char *nbr)
{
  int	lp;
  int	sg;

  sg = 0;
  lp = 0;
  while (nbr[lp] != '\0')
    {
      if (nbr[lp] == '+' || nbr[lp] == '-')
	{
	  if (sg == 1)
	    return (0);
	}
      else if ((nbr[lp] != '+' || nbr[lp] != '-') && sg == 0)
	sg = 1;
      ++lp;
    }
  return (1);
}

char	*get_begin(char *nbr, int *sg)
{
  int	lp;
  int	sign;

  lp = 0;
  sign = 1;
  while (nbr[lp] == '+' || nbr[lp] == '-')
    {
      if (nbr[lp] == '-')
	sign *= -1;
      ++lp;
    }
  *sg = sign;
  return (nbr + lp);
}

int	my_getnbr_base(char *nbr, char *base)
{
  int	bs;
  int	nb;
  int	lp;
  int	sg;

  bs = my_strlen(base);
  if (!my_check(nbr))
    return (0);
  lp = 0;
  nb = 0;
  nbr = get_begin(nbr, &sg);
  while (nbr[lp] != '\0')
    {
      if (my_get_el(nbr[lp], base) == -1)
	return (nb);
      nb *= bs;
      nb += my_get_el(nbr[lp], base);
      ++lp;
    }
  nb = (sg < 0) ? nb * -1 : nb;
  return (nb);
}
