/*
** my_aff_comb.c for Exercice 5 in /home/munoz_d/rendu/Piscine_C_J03
** 
** Made by munoz david
** Login   <munoz_d@epitech.net>
** 
** Started on  Wed Sep 30 15:56:50 2015 munoz david
** Last update Fri Oct  2 09:23:24 2015 munoz david
*/

int	display(char a, char b, char c)
{
  my_putchar(a);
  my_putchar(b);
  my_putchar(c);
}

int	display_(char d, char e)
{
  my_putchar(d);
  my_putchar(e);
}

int	my_aff_comb()
{
  char a;
  char b;
  char c;

  a = '0';
  b = '1';
  c = '2';
  while (a <= 56)
    {
      display(a, b, c);
      if (a >= 55)
	return (0);
      display_(',', ' ');
      c = c + 1;
      if (c >= 58)
	{
	  b = b + 1;
	  c = b + 1;
	  if (b >= 57)
	    {
	      a = a + 1;
	      b = a + 1;
	      c = b + 1;
	    }
	}
    }
}
