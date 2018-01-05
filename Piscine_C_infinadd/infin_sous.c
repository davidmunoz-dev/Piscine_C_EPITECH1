/*
** infin_sous.c for soustraction in /home/munoz_d/rendu/Piscine_C_infinadd
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Tue Oct 27 15:02:42 2015 munoz david
** Last update Sat Oct 31 17:20:39 2015 munoz david
*/

#include "my_struct.h"
#include "my.h"
#include <stdlib.h>
#include <stdio.h>

int	my_sous_first(char *str1, char *str2)
{
  int	size1;
  int	size2;

  size1 = my_strlen(str1);
  size2 = my_strlen(str2);
  if (size1 >= size2)
      my_sous(str1, str2, size1, size2);
  else if (size2 > size1)
      my_sous(str2, str1, size2, size1);
  return (0);
}

int	sous_cas1a(t_pr *arg)
{
  if (arg->nb2 > arg->nb1)
    {
      printf("Condition sous_cas 1a\n");
      if (arg->smin > 0)
	{
	  arg->ret = (arg->nb1[arg->smax - 1] - '0') - (arg->nb2[arg->smin - 1] - '0');
	  arg->ret = arg->ret - arg->pseudo_ret;
	  arg->pseudo_ret = 0;
	  if (arg->ret < 0)
	    {
	      printf("Condition nb2 > nb1");
	      arg->ret = arg->ret + 10;
	      arg->pseudo_ret++;
	    }
	}
      else
	{
	  arg->ret = (arg->nb1[arg->smax - 1] - '0') - arg->pseudo_ret + arg->ret;
	  arg->pseudo_ret = 0;
	  if (arg->ret < 0)
	    {
	      arg->ret = arg->ret + 10;
	      arg->pseudo_ret++;
	    }
	}
    }
}

int     sous_cas1b(t_pr *arg)
{
  if (arg->nb2 < arg->nb1)
    {
      printf("Condition sous_cas 1b\n");
      if (arg->smin > 0)
        {
          arg->ret = (arg->nb1[arg->smax - 1] - '0') - (arg->nb2[arg->smin - 1] - '0');
          arg->ret = arg->ret - arg->pseudo_ret;
          arg->pseudo_ret = 0;
          if (arg->ret < 0)
            {
              arg->ret = arg->ret + 10;
              arg->pseudo_ret++;
            }
        }
      else
        {
          arg->ret = (arg->nb1[arg->smax - 1] - '0') - arg->pseudo_ret + arg->ret;
          arg->pseudo_ret = 0;
          if (arg->ret < 0)
            {
              arg->ret = arg->ret + 10;
              arg->pseudo_ret++;
            }
        }
      my_putchar('-');
    }
}


int	my_sous(char *nb1, char *nb2, int smax, int smin)
{
  char  *result;
  int   i;
  t_pr	*arg;

  i = 0;
  arg = malloc(sizeof(t_pr));
  arg->nb1 = nb1;
  arg->nb2 = nb2;
  arg->smin = smin;
  arg->smax = smax;
  arg->ret = 0;
  arg->pseudo_ret = 0;
  if ((result = malloc(sizeof(smax + 1))) == NULL)
    return (-1);
  while (nb1[i])
    {
      sous_cas1a(arg);
      sous_cas1b(arg);
      //      printf("retenu final: %d\n", arg->ret);
      result[i] = arg->ret % 10 + '0';
      arg->ret = arg->ret / 10;
      i++;
      arg->smax--;
      arg->smin--;
    }
  return (final_func(arg->ret, result, i));
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
  my_sous_first(av[1], av[2]);
  my_putchar('\n');
  return (0);
}
