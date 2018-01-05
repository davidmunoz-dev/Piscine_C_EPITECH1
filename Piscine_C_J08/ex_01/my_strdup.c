/*
** my_strdup.c for Exercice 1 in /home/munoz_d/rendu/Piscine_C_J08
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Thu Oct  8 11:02:36 2015 munoz david
** Last update Thu Oct  8 23:24:20 2015 munoz david
*/

#include <stdlib.h>

char	*my_strdup(char *src)
{
  int	length;
  int	i;
  char	*dest;

  length = my_strlen(src);
  i = 0;
  dest = malloc(length);
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
