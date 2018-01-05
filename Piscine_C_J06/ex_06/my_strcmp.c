/*
** my_strcmp.c for Exercice 6 in /home/munoz_d/rendu/Piscine_C_J06/ex_06
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Tue Oct  6 19:05:16 2015 munoz david
** Last update Tue Oct  6 22:44:00 2015 munoz david
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	r;

  i = 0;
  r = 0;
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      if (s1[i] != s2[i])
        {
          r = (s1[i] + 48) - (s2[i] + 48);
          return (r);
        }
      i = i + 1;
    }
  return (0);
}
