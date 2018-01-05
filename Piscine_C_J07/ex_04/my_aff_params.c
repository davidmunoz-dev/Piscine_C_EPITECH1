/*
** my_aff_params.c for Exercice 4 in /home/munoz_d/rendu/Piscine_C_J07/ex_04
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Wed Oct  7 12:14:06 2015 munoz david
** Last update Wed Oct  7 18:58:24 2015 munoz david
*/

int	main(int argc, char **argv)
{
  int	n;

  n = 0;
  while (n < argc)
    {
      my_putstr(argv[n]);
      my_putchar('\n');
      n = n + 1;
    }
  return (0);
}
