/*
** my_putstr.c for Exercise 3 in /home/munoz_d/rendu/Piscine_C_J04
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Thu Oct  1 16:12:51 2015 munoz david
** Last update Tue Oct  6 10:49:50 2015 munoz david
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
