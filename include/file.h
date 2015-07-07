/*
** file.h for bsq in /home/pirou_g/a rendre bsq/bsq/include
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Jan 18 20:02:04 2015 Guillaume Pirou
** Last update Sun Jan 18 20:02:04 2015 Guillaume Pirou
*/

#ifndef FILE_H_
  #define FILE_H_

#define FILE_SZ_MAX 2147483648
#define BUFF_SZ	    33554432
#define UNIT_ERROR -1
#define BYTE 1
#define KBYTE 2
#define MBYTE 3
#define GBYTE 4
#define TBYTE 5
#define UBYTE "B"
#define UKBYTE "kB"
#define UMBYTE "MB"
#define UGBYTE "GB"
#define MEMTOTAL "MemTotal:"
#define MEMFREE "MemFree:"
#define MEMAVAILABLE "MemAvailable:"
#define EOF 0
#define NEOF 1

struct	s_ram
{
  int	unit;
  long	memtotal;
  long	memfree;
  long	memavailable;
};

typedef struct s_ram t_ram;

struct s_file
{
  char	buff[BUFF_SZ + 1];
  char	*name;
  int	fmode;
  int	fd;
  int	csr;
  int	status;
};

typedef struct s_file t_fle;

int	my_fdup(char *, char *);
int	my_fgeti(t_fle *);
long	my_fgetsize(char *);
int	my_fbuffncpy(char *, char *, int);
int	my_fread(t_fle *, char *, int);
int	my_fclose(t_fle *);
t_fle	*my_fopen(char *, int);

#endif
