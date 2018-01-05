/*
** my_strlowcase.c for Exercice 09 in /home/munoz_d/rendu/Piscine_C_J06/ex_09
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Tue Oct  6 20:07:21 2015 munoz david
** Last update Tue Oct  6 20:11:37 2015 munoz david
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
        {
          str[i] = (str[i] + 32);
        }
      i = i + 1;
    }
  return (str);
}
