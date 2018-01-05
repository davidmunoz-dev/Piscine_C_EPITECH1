/*
** my_factorielle_rec.c for Exercice 2 in /home/munoz_d/rendu/Piscine_C_J05
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Fri Oct  2 15:22:54 2015 munoz david
** Last update Mon Oct  5 23:33:04 2015 munoz david
*/

int	my_factorielle_rec(int nb)
{
    if (nb == 0)
      return (1);
    if (nb < 0 || nb > 13)
      return (0);
    if (nb > 0 && nb < 13)
      return (nb * my_factorielle_rec(nb - 1));
}
