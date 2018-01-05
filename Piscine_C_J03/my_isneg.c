/*
** my_isneg.c for Exercice 4 in /home/munoz_d/rendu/Piscine_C_J03
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Wed Sep 30 14:29:13 2015 munoz david
** Last update Thu Oct  1 21:28:20 2015 munoz david
*/

int	my_isneg(int n)
{
  if (n < 0)
    {
      my_putchar('N');
    }
  else if (n >= 0)
    {
      my_putchar('P');
    }
}
