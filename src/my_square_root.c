/*
** my_square_root.c for my_square_root in /home/pirou_g/Piscine/Piscine_C_J05
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Fri Oct  3 11:18:24 2014 Guillaume Pirou
** Last update Fri Oct  3 14:10:13 2014 Guillaume Pirou
*/

int	my_square_root(int nb)
{
  int	i;

  i = 2;
  if (nb <= 0)
    return (0);
  else if (nb == 1)
    return (1);
  else
    while (1 == 1)
      {
	if ((i * i) == nb)
	  return (i);
	else if (i >= nb)
	  return (0);
	else
	  ++i;
      }
}
