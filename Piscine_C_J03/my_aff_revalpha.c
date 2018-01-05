/*
** my_aff_revalpha.c for Exercice 2 in /home/munoz_d/rendu/Piscine_C_J03
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Wed Sep 30 12:24:12 2015 munoz david
** Last update Thu Oct  1 21:25:54 2015 munoz david
*/

int	my_aff_revalpha()
{
  char c;
  c = 122;
  while (c >= 97)
    {
      my_putchar(c);
      c = c - 1;
    }
  return (0);
}
