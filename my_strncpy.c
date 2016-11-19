/*
** my_strncpy.c for  in /home/nileeda/Documents/C-Jour04
** 
** Made by PATIN Adeline
** Login   <patin_a@etna-alternance.net>
** 
** Started on  Fri Oct 21 11:16:53 2016 PATIN Adeline
** Last update Fri Oct 21 13:31:03 2016 PATIN Adeline
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      if (i == n - 1)
	  return(dest);
      else
	i = i + 1;
    }  
  return (dest);
}
