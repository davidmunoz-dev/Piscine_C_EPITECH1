/*
** my_revstr.c for Exercice 4 in /home/munoz_d/rendu/Piscine_C_J06
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Mon Oct  5 15:02:18 2015 munoz david
** Last update Tue Oct  6 23:35:49 2015 munoz david
*/

char	*my_revstr(char *str)
{
  int	i;
  int	a;
  char	t;

  i = 0;
  a = my_strlen(str) - 1;
  while (str[i] != '\0')
    {
      if (i < a)
	{
	  t = str[i];
	  str[i] = str[a];
	  str[a] = t;
	  a = a - 1;
	}
      i = i + 1;
    }
  return (str);
}
