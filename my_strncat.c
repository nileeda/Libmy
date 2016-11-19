/*
** my_strncat.c for  in /home/nileeda/Documents/C-Jour04
** 
** Made by PATIN Adeline
** Login   <patin_a@etna-alternance.net>
** 
** Started on  Fri Oct 21 17:55:26 2016 PATIN Adeline
** Last update Wed Oct 26 09:54:31 2016 PATIN Adeline
*/

int	my_strlen(char *str);

char	*my_strncat(char *dest, char *src, int n)
{
  int	i;
  int	j;
  int	size;

  i = 0;
  size = my_strlen(dest);
  j = size;
  while (src[i] != '\0' && i != n)
    {
      dest[j] = src[i];
      i = i + 1;
      j = j + 1;
    }
  return (dest);
}
