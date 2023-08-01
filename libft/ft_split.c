/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/04/17 08:55:31 by toantune	       #+#    #+#	      */
/*   Updated: 2023/04/26 19:36:34 by toantune         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c);

static size_t	str_count(char const *s, char c)
{
	size_t	ct;

	ct = 0;
	while (*s)
	{
		if (*s && (*s != c))
		{
			ct++;
			while (*s && (*s != c))
				++s;
		}
		while (*s && (*s == c))
			++s;
	}
	return (ct);
}

static void	get_str(char const *s, char c, char **split)
{
	size_t	i;
	size_t	len;
	size_t	start;

	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			len = 0;
			while (s[i] && s[i] != c)
			{
				i++;
				len++;
			}
			*split = ft_substr(s, start, len);
			split++;
		}
		else
			i++;
	}
	*split = NULL;
}

char	**ft_split(char const *s, char c)
{	
	char	**split;
	size_t	len;	

	len = str_count(s, c);
	split = (char **)malloc(sizeof(char **) * (len + 1));
	if (!split)
		return (NULL);
	if (len > 0)
	{
		get_str(s, c, split);
	}
	else
		split[0] = NULL;
	return (split);
}
