#include<stdlib.h>
#include <string.h>
#include<stdio.h>
int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new;

	i = 0;
	new = (char *) malloc (1 * ft_strlen (src) + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	while (*src)
	{
		new[i++] = *src++;
	}
	new[i] = '\0';
	return (new);
}

void  *my_memset(void *b, int c, int len)
{
  int           i;
  unsigned char *p = b;
  i = 0;
  while(len >0)
    {
      *p = c;
      p++;
      len--;
    }
  return(b);
}

int main()
{
char buffer[10]; // Allocate enough memory
    my_memset(buffer, 'a', 5);

    // Print the result to verify
    printf("Buffer: %s\n", buffer);
}
