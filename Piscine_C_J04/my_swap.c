/*
** my_swap.c for Exercice 2 in /home/munoz_d/rendu/Piscine_C_J04
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Thu Oct  1 11:48:00 2015 munoz david
** Last update Fri Oct  2 22:07:26 2015 munoz david
*/

int	my_swap(int *a, int *b)
{
  int	i;

  i = *a;
  *a = *b;
  *b = i;
}
