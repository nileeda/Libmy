/*
** my_strcmp.c for  in /home/nileeda/Documents/C-Jour04
** 
** Made by PATIN Adeline
** Login   <patin_a@etna-alternance.net>
** 
** Started on  Fri Oct 21 14:01:42 2016 PATIN Adeline
** Last update Thu Oct 27 14:44:38 2016 PATIN Adeline
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	result;

  i = 0;
  while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    i = i + 1;
  if (s1[i] == '\0' && s2[i] == '\0' )
    result = 0;
  if (s1[i] < s2[i])
    result = -1;
  else if (s1[i] > s2[i])
    result = 1;
  return (result);
}
