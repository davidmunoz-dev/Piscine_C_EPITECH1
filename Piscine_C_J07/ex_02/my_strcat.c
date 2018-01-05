/*
** my_strcat.c for Exercice 2 in /home/munoz_d/rendu/Piscine_C_J07/ex_02
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Wed Oct  7 10:19:01 2015 munoz david
** Last update Wed Oct  7 20:41:17 2015 munoz david
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (dest[n] != '\0')
    n = n + 1;
  while (src[i] != '\0')
    {
      dest[n] = src[i];
      n = n + 1;
      i = i + 1;
    }
  dest[n] = '\0';
  return (dest);
}
