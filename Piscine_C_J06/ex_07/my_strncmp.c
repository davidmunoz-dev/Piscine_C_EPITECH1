/*
** my_strncmp.c for Exercice 7 in /home/munoz_d/rendu/Piscine_C_J06/ex_07
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Tue Oct  6 22:46:19 2015 munoz david
** Last update Tue Oct  6 23:37:42 2015 munoz david
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	a;

  a = 0;
  while (s1[a] ==  s2[a] && a < n - 1)
    {
      a = a + 1;
    }
  return (s1[a] - s2[a]);
}
