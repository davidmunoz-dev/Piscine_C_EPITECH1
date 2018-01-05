/*
** my_strstr.c for Exercice 5 in /home/munoz_d/rendu/Piscine_C_J06/ex_05
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Mon Oct  5 17:35:00 2015 munoz david
** Last update Tue Oct  6 22:43:02 2015 munoz david
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	n;
  int	n2;

  i = 0;
  n = 0;
  while (str[i] != '\0')
    {
      if (str[i] == to_find[n])
        {
          n2 = i;
          while (to_find[n] == str[i])
            {
              i = i + 1;
              n = n + 1;
              if (to_find[n] == '\0' || to_find[n] == str [n])
                {
                  return (&str[n2]);
                }
            }
        }
      i = i + 1;
    }
}
