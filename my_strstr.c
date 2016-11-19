/*
** my_strstr.c for  in /home/nileeda/Documents/Libmy/patin_a/libmy_01
** 
** Made by PATIN Adeline
** Login   <patin_a@etna-alternance.net>
** 
** Started on  Sun Oct 23 13:57:24 2016 PATIN Adeline
** Last update Sun Oct 23 14:37:59 2016 PATIN Adeline
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  char	*result = str;

  i = 0;
  while (*str != '\0')
    {
      while (*str == *to_find)
	{
	  str = str + 1;
	  to_find = to_find + 1;
	  if (*to_find == '\0')
	    return (result + i);
	}
      str = str + 1;
      i = i + 1;
    }
  return ('\0');
}
