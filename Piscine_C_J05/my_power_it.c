/*
** my_power_it.c for Exercice 3 in /home/munoz_d/rendu/Piscine_C_J05
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Mon Oct  5 20:56:04 2015 munoz david
** Last update Mon Oct  5 23:34:30 2015 munoz david
*/

int	my_power_it(int nb, int power)
{
  int	i;
  int	resultat;

  resultat = nb;
  i = 1;
  if (nb == 0)
    return (0);
  if (power == 0)
    return (1);
  while (i < power)
    {
      nb = nb * resultat;
      i = i + 1;
    }
}
