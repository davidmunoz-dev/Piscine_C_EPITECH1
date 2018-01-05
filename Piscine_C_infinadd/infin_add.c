/*
** main.c for main in /home/onillo_l/rendu/Piscine/Piscine_C_infinadd
** 
** Made by Lucas Onillon
** Login   <onillo_l@epitech.net>
** 
** Started on  Mon Oct 19 10:38:10 2015 Lucas Onillon
** Last update Sat Oct 31 12:00:45 2015 munoz david
*/

#include "my.h"
#include <stdlib.h>

int	my_add_first(char *str1, char *str2)
{
  int   size1;
  int   size2;

  size1 = my_strlen(str1);
  size2 = my_strlen(str2);
  if (size1 >= size2)
    my_add(str1, str2, size1, size2);
  else if (size2 > size1)
     my_add(str2, str1, size2, size1);
   return (0);
}

int	my_add(char *nb1, char *nb2, int smax, int smin)
{
  char  *result;
  int   i;
  int   ret;

  i = ret = 0;
  if ((result = malloc(sizeof(smax + 1))) == NULL)
    return (-1);
  while (nb1[i])
    {
      if (smin > 0)
	ret = (nb1[smax - 1] - '0') + (nb2[smin - 1] - '0') + ret;
      else
	ret = (nb1[smax - 1] - '0') + ret;
      result[i] = ret % 10 + '0';
      ret = ret / 10;
      i++;
      smax--;
      smin--;
    }
  return (final_func(ret, result, i));
}

int	final_func(int ret, char *result, int i)
{
  if (ret != 0)
    {
      result[i] = ret + '0';
      i++;
    }
  result[i] = '\0';
  result = my_revstr(result);
  my_putstr(result);
  return (0);
}

int	main(int ac, char **av)
{
  if (ac != 3)
    return (-1);
  my_add_first(av[1], av[2]);
  my_putchar('\n');
  return (0);
}
