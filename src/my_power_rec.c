/*
** my_power_rec.c for my_power_rec in /home/pirou_g/Piscine/Piscine_C_J05
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Fri Oct  3 10:35:17 2014 Guillaume Pirou
** Last update Fri Oct  3 16:07:44 2014 Guillaume Pirou
*/

int my_power_rec(int nb, int power)
{
  if (nb == 1)
    return (1);
  if (power == 0)
    return (1);
  if (power < 0 || power > 30)
    return (0);
  if (power == 1)
    return (nb);
  return (nb * my_power_rec(nb, power - 1));
}
