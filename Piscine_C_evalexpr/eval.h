/*
** eval.h for  in /home/lenoir_g/rendu/Piscine_C_evalexpr
** 
** Made by guillaume lenoir
** Login   <lenoir_g@epitech.net>
** 
** Started on  Wed Oct 21 17:57:02 2015 guillaume lenoir
** Last update Thu Oct 22 16:02:28 2015 guillaume lenoir
*/

#ifndef EVAL_H
# define EVAL_H

typedef	struct	s_list
{
  int		nbr;
  struct s_list	*next;
}		t_list;

char	*addInf(char *, char *);

#endif /* !EVAL_H */
