/*
** my_strlen.c for Exercice 4 in /home/munoz_d/rendu/Piscine_C_J04
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Thu Oct  1 16:25:25 2015 munoz david
** Last update Tue Oct  6 10:49:10 2015 munoz david
*/

int	my_strlen (char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
