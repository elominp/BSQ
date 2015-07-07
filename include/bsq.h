/*
** bsq.h for bsq in /home/pirou_g/a rendre bsq/bsq/include
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Jan 18 20:01:56 2015 Guillaume Pirou
** Last update Sun Jan 18 20:01:57 2015 Guillaume Pirou
*/

#ifndef BSQ_H_
  #define BSQ_H_
  #define SIZE_MAX 4294967295
  #define LEN_MAX 2147483647

#include "file.h"

struct s_map
{
  char	**map;
  long	row;
  long	col;
};

typedef struct s_map t_map;

struct	s_square
{
  long	x;
  long	y;
  long	size;
};

typedef struct s_square t_sqr;

int	my_read_map(t_map *, char *);
void	get_raminfo(t_ram *);
void	get_raminfoloop(t_ram *, char **, int);
int	get_memunit(char *);
t_map	*get_bsqmap(char *, t_ram *);
long	oc(int);
int	bsq_checks(char *, t_map *);
int	check_chars(char *);
int	check_row(char *);
int	check_col(char *);
int	check_col_loop(t_fle *, char *, long, long);
void	disp_example();
void	my_dispmap(t_map *);
int	search_one_sq(t_map *, long, long, long);
int	search_square(t_map *, t_sqr *, long);
void	set_square(t_map *, t_sqr *);
long	my_get_bgst(t_map *);
void	bruteforce(t_map *);

#endif