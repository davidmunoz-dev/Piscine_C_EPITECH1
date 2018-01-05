/*
** evalExpr.c for  in /home/lenoir_g/rendu/Piscine_C_evalexpr
** 
** Made by guillaume lenoir
** Login   <lenoir_g@epitech.net>
** 
** Started on  Wed Oct 21 17:47:18 2015 guillaume lenoir
** Last update Thu Oct 22 21:48:44 2015 munoz david
*/

#include <stdio.h>
#include <stdlib.h>
#include "eval.h"

char	**supprnbr(char **nbr, int i, int lenght)
{
  while (i < lenght)
    {
      nbr[i] = nbr[i + 1];
      i = i + 1;
    }
  return (nbr);
}

char	*doOneEval(char **nbr, char *op, int len)
{
  int	fNeg;
  int	c;
  int	i;
  char	*res;
  char	**temps;

  c = i = 0;
  temps = malloc(100);
  while (op[c] != '\0')
    {
      if (op[c] == '+')
	{
	  temps[c] = addInf(nbr[c], nbr[c + 1]);
	}
      if (op[c] == '-')
	{
	  temps[c] = addInf(nbr[c], nbr[c + 1]);
	}
      supprnbr(temps, c, len);
      res = temps[c];
      c = c + 1;
    }
  return (res);
}

char	*bigwhile (char *str)
{
  char  **nbr;
  char  *temps;
  char  *op;
  int   i;
  int   n;
  int   c;
  int   k;
  while (str[i] != '\0')
    {
      nbr[n] = malloc(123);
      while (isDigitChar(str[i]) == 1)
        {
          nbr[n][k] = str[i];
          i = i + 1;
          k = k + 1;
        }
      k = 0;
      if (str[i] != '\0')
        {
          op[c] = str[i];
          i = i + 1;
          n = n + 1;
          c = c + 1;
        }
    }
}

char	*evalOne(char *str)
{
  char	**nbr;
  char	*temps;
  char	*op;
  int	i;
  int	n;
  int	c;
  int	k;

  i = n = k = 0;
  op = malloc(my_strlen(str));
  temps = malloc(my_strlen(str));
  nbr = malloc(my_strlen(str));
  if (str[0] == '-')
    {
      op[0] = '_';
      c = i = 1;
    }
  bigwhile (str);
  temps = doOneEval(nbr, op, n);
  return (temps);
}

int	main(int argc, char **argv)
{
  doOneEval(nbr, op, len);
  evalOne(str);
}
