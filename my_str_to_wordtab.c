/*
** my_str_to_wordtab.c for  in /home/nileeda/Documents/C-Jour07/my_str_to_wordtab
** 
** Made by PATIN Adeline
** Login   <patin_a@etna-alternance.net>
** 
** Started on  Mon Oct 24 15:14:24 2016 PATIN Adeline
** Last update Wed Oct 26 09:53:09 2016 PATIN Adeline
*/

#include <stdlib.h>
/*#include <stdio.h>*/

int		my_alphanum(char str);
char		*fill_tab(char *str, char **tab, int i, int j);
void		linetoline(char *str, char **tab);
int		test_str(char *str);

char		**my_str_to_wordtab(char *str)
{
  char		**tab;
  int		count;
  int		i;

  count = 0;
  i = 0;
  if (test_str(str) == 1)
    return (NULL);
  else
    {
      while (str[i])
	{
	  if ((my_alphanum(str[i]) == 0) && (my_alphanum(str[i + 1]) == 1))
	    count++;
	  i++;
	}
      tab = malloc((count + 1) * sizeof(*tab));
      count = 0;
      i = 0;
      linetoline(str, tab);
      return (tab);
    }
}

int		test_str(char *str)
{
  if (str == NULL)
      return (1);
  else if (*str == 0)
      return (1);
  return (0);
}

int		my_alphanum(char str)
{
  if (str < 48)
    return (1);
  else if (str > 57 && str < 65)
    return (1);
  else if (str > 90 && str < 97)
    return (1);
  else if (str > 122)
    return (1);
  else
    return (0);
}

void		linetoline(char *str, char **tab)
{
  int		i;
  int		j;
  int		count;

  i = 0;
  j = 0;
  count = 0;
   while (str[i] != '\0')
    {
      while (my_alphanum(str[i]) == 0)
	{
	  count = count + 1;
	  i = i + 1;
	}
      if (count != 0)
	{
	  tab[j] = malloc((count + 1) * sizeof(char*));
	  tab[j] = fill_tab(str, tab, i-count, j);
	  j = j + 1;
	}
      i = i + 1;
      count = 0;
    }
}

char		*fill_tab(char *str, char **tab, int i,  int j)
{
  int		k;

  k = 0;
  while (my_alphanum(str[i]) == 0)
    {
      tab[j][k] = str[i];
      i = i + 1;
      k = k + 1;
    }
  return (tab[j]);
}
