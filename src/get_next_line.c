#include "../libft.h"
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 32
#endif

static int	gnl_strcat(char **dest, char *src)
{
	char	*tmp;
	char	*new;
	size_t	dstlen;
	size_t	srclen;
	size_t	newlen;

	dstlen = ft_strlen(*dest);
	srclen = ft_strlen(src);
	newlen = dstlen + srclen;
	new = malloc(sizeof(char) * (newlen + 1));
	if (!new)
		return (0);
	new[newlen] = 0;
	while (srclen--)
		new[--newlen] = src[srclen];
	while (dstlen--)
		new[--newlen] = (*dest)[dstlen];
	tmp = *dest;
	*dest = new;
	if (tmp)
		free(tmp);
	return (1);
}

static int	gnl_init(int fd, char **buffer, char **reminder, char **line)
{
	if (!line || fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
		return (0);
	if (!*reminder)
	{
		*reminder = ft_strdup("");
		if (!*reminder)
			return (0);
	}
	*buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!*buffer)
		return (0);
	*line = ft_strdup("");
	if (!*line)
		return (0);
	return (1);
}

static int	gnl_pushtoline(char **reminder, char **line)
{
	char	*chrpos;

	chrpos = ft_strchr(*reminder, '\n');
	if (chrpos)
		*chrpos = '\0';
	if (!gnl_strcat(&(*line), *reminder))
		return (0);
	if (chrpos)
		*chrpos = '\n';
	return (1);
}

static int	gnl_subn(char **reminder)
{
	char	*tmp;

	tmp = ft_strchr(*reminder, '\n');
	if (tmp)
	{
		if (*(tmp + 1) != '\0')
		{
			tmp = *reminder;
			*reminder = ft_strdup(ft_strchr(*reminder, '\n') + 1);
			free(tmp);
			if (!*reminder)
				return (0);
		}
		else
			*reminder[0] = 0;
	}
	else
	{
		tmp = *reminder;
		*reminder = ft_strdup("");
		free(tmp);
		if (!*reminder)
			return (0);
	}
	return (1);
}

int	get_next_line(int fd, char **line)
{
	static char	*reminder;
	char		*buffer;
	size_t		size;

	size = 1;
	if (!gnl_init(fd, &buffer, &reminder, &(*line)))
		return (-1);
	while (!ft_strchr(reminder, '\n') && size)
	{
		size = read(fd, buffer, BUFFER_SIZE);
		buffer[size] = 0;
		if (!gnl_strcat(&reminder, buffer))
			return (-1);
	}
	if (!gnl_pushtoline(&reminder, line) || !gnl_subn(&reminder))
		return (-1);
	free(buffer);
	if (reminder[0] == 0 && size < 1)
	{
		free(reminder);
		reminder = NULL;
	}
	if (size == 0)
		return (0);
	return (1);
}
