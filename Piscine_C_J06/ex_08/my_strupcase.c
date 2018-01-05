/*
** my_strupcase.c for Exercice 5 in /home/munoz_d/rendu/Piscine_C_J06/ex_08
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Tue Oct  6 20:05:47 2015 munoz david
** Last update Tue Oct  6 20:06:31 2015 munoz david
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
        {
          str[i] = (str[i] - 32);
        }
      i = i + 1;
    }
  return (str);
}
