/*
** my_swap.c for  in /home/nileeda/Documents/C-Jour03/patin_a/my_swap
** 
** Made by PATIN Adeline
** Login   <patin_a@etna-alternance.net>
** 
** Started on  Thu Oct 20 11:37:48 2016 PATIN Adeline
** Last update Thu Oct 20 18:46:29 2016 PATIN Adeline
*/

void	my_swap(int *a, int *b)
{
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}
