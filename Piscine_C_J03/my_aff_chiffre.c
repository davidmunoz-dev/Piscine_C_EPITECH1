/*
** my_aff_chiffre.c for Exercise 3 in /home/munoz_d/rendu/Piscine_C_J03
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Wed Sep 30 13:57:51 2015 munoz david
** Last update Thu Oct  1 21:26:55 2015 munoz david
*/

int	my_aff_chiffre()
{
  char c;
  c = 48;
  while (c <= 57)
    {
      my_putchar(c);
      c = c + 1;
    }
}
