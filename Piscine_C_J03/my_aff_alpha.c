/*
** my_aff_alpha.c for Exercice 1 in /home/munoz_d/rendu/Piscine_C_J03
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Wed Sep 30 10:23:52 2015 munoz david
** Last update Thu Oct  1 21:25:22 2015 munoz david
*/

int	my_aff_alpha()
{
  char c;
  c = 97;
  while (c <= 122)
    {
      my_putchar(c);
      c = c + 1;
    }
  return (0);
}
