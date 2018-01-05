/*
** sum_params.c for Exercice 2 in /home/munoz_d/rendu/Piscine_C_J08/ex_02
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Thu Oct  8 15:36:52 2015 munoz david
** Last update Thu Oct  8 23:24:52 2015 munoz david
*/

#include <stdlib.h>

char *sum_params(int argc, char **argv)
{
  int	i;
  char	*tableau;

  i = 0;
  while (i < argc)
    {
      my_strcat(tableau, argv[i]);
      i = i + 1;
    }
  return (0);
}
