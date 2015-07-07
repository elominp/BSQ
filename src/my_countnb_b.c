/*
** my_countnb_b.c for my_countnb_b in /home/pirou_g/Piscine/Piscine_C_J08/lib/my
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Thu Oct  9 11:50:26 2014 Guillaume Pirou
** Last update Thu Oct  9 11:51:33 2014 Guillaume Pirou
*/

int	my_countnb_b(int nb, int bs)
{
  int	lp;

  lp = 0;
  while (nb > 0)
    {
      nb /= bs;
      ++lp;
    }
  return (lp);
}
