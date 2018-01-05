/*

** my_put_nbr.c for Nombre in /home/munoz_d/rendu/Piscine_C_J03
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Tue Oct  6 10:39:16 2015 munoz david
** Last update Tue Oct  6 12:17:34 2015 munoz david
*/

int	my_put_nbr(int nb)
{
  int	rest;

  if (nb >= 0)
    {
      if (nb >= 10)
        {
          rest = nb % 10;
          nb = (nb - rest) / 10;
          my_put_nbr(nb);
          my_putchar(rest + 48);
        }
      else
        {
          my_putchar(nb + 48);
        }
    }
  if (nb < 0)
    {
      nb = nb * (-1);
      my_putchar(45);
      my_put_nbr(nb);
    }
  return (0);
}
