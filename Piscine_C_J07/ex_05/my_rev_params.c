/*
** my_rev_params.c for Exercice 5 in /home/munoz_d/rendu/Piscine_C_J07/ex_05
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Wed Oct  7 19:11:38 2015 munoz david
** Last update Wed Oct  7 20:40:26 2015 munoz david
*/

int	main(int argc, char **argv)
{
  while (0 < argc)
    {
      my_putstr(argv[argc - 1]);
      my_putchar('\n');
      argc = argc - 1;
    }
  return (0);
}
