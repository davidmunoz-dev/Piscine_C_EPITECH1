/*
** my_factorielle_it.c for Exercise 1 in /home/munoz_d/rendu/Piscine_C_J05
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Fri Oct  2 10:40:35 2015 munoz david
** Last update Mon Oct  5 23:32:32 2015 munoz david
*/

int	my_factorielle_it(int nb)
{
  int	r;

  r = nb;
  if (nb == 0)
    return (1);
  if (nb < 0 || nb > 13)
    return (0);
  while (nb - 1 > 0)
    {
      nb = nb - 1;
      r = r * nb;
    }
  return (r);
}
