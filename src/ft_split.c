#include "../libft.h"

static size_t	ft_findwords(char const *s, char c)
{
	size_t		i;
	char const	*tmp;

	i = 0;
	tmp = s;
	while (*tmp)
	{
		while (*tmp == c)
			tmp++;
		if (*tmp)
		{
			i++;
			while (*tmp && *tmp != c)
				tmp++;
		}
	}
	return (i);
}

static void    ft_wordcopy(char **string, char const *s, char c, size_t words)
{
    char const    *tmpstart;
    char const    *tmpend;
    size_t        i;
    size_t        j;

    tmpstart = s;
    tmpend = s;
    i = 0;
    while (words)
    {
        while (*tmpend++ == c)
            tmpstart = tmpend;
        while (*tmpend != c && *tmpend != 0)
            tmpend++;
        string[i] = malloc(sizeof(char) * (tmpend - tmpstart) + 1);
        if (string[i] == NULL)
            return ;
        j = 0;
        while (tmpstart != tmpend)
            string[i][j++] = *tmpstart++;
        string[i++][j] = 0;
        words--;
    }
}

char	**ft_split(char const *s, char c)
{
	char		**string;

	if (s == NULL)
		return (NULL);
	string = malloc(sizeof(char *) * ft_findwords(s, c) + 1);
	if (string == NULL)
		return (NULL);
	string[ft_findwords(s, c)] = NULL;
	ft_wordcopy(string, s, c, ft_findwords(s, c));
	return (string);
}
