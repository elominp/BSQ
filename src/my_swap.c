/*
** my_swap.c for my_swap in /home/pirou_g/Piscine/Piscine_C_J04
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Thu Oct  2 09:13:17 2014 Guillaume Pirou
** Last update Thu Oct  2 09:14:26 2014 Guillaume Pirou
*/

int	my_swap(int *a, int *b)
{
  int	cp_b;

  cp_b = *b;
  *b = *a;
  *a = cp_b;
  return (0);
}
