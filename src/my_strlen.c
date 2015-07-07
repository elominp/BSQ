/*
** my_strlen.c for my_strlen in /home/pirou_g/Piscine/Piscine_C_J04
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Thu Oct  2 09:19:15 2014 Guillaume Pirou
** Last update Fri Oct  3 22:12:39 2014 Guillaume Pirou
*/

int	my_strlen(char *str)
{
  int	loop;

  loop = 0;
  while (str[loop] != '\0')
      ++loop;
  return (loop);
}
