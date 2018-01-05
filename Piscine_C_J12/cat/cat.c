/*
** cat.c for cat in /home/munoz_d/rendu/Piscine_C_J12/cat
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Tue Oct 13 20:21:22 2015 munoz david
** Last update Wed Oct 14 23:33:13 2015 munoz david
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	erreur(int argc, char **argv)
{
  int	n;
  int	fd;
  char	buffer[30000];

  n = 29999;
  if (argc == 1)
    {
      while (n > 0)
	{
	  n = read(0, buffer, 29999);
          my_putstr(buffer);
	}
    }
}

int	main(int argc, char **argv)
{
  int	fd;
  int	i;
  int	n;
  char	buffer[30000];

  n = 29999;
  i = 1;

  if (fd == -1)
    return (1);
  erreur(argc, argv);
  while (i < argc)
    {
      fd = open(argv[i], O_RDONLY);
      while (n == 29999)
	{
	  n = read(fd, buffer, 29999);
	  buffer[n] = '\0';
	  my_putstr(buffer);
	}
      i = i + 1;
      close(fd);
    }
  return (0);
}
