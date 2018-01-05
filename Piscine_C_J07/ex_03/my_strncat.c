/*
** my_strncat.c for Exercice 3 in /home/munoz_d/rendu/Piscine_C_J07/ex_03
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Wed Oct  7 11:38:12 2015 munoz david
** Last update Wed Oct  7 20:42:42 2015 munoz david
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	f;

  i = 0;
  f = 0;
  while (dest[f] != '\0')
    f = f + 1;
  while (i != nb && src[i] != '\0')
    {
      dest[f] = src[i];
      f = f + 1;
      i = i + 1;
    }
  dest[f] = '\0';
  return (dest);
}
