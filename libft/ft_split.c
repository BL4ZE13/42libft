/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:38:37 by diomarti          #+#    #+#             */
/*   Updated: 2022/11/03 16:18:23 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	nmr_str(char const *str, char c)
{
	size_t	i;
	size_t	a;
	size_t	toggle;

	toggle = 0;
	a = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && toggle == 0)
		{
			toggle = 1;
			a++;
		}
		else if (str[i] == c)
			toggle = 0;
		i++;
	}
	return (a);
}

char	*new_word(const char *str, int start, int finish)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc((finish - start + 1));
	while (start < finish)
	{
		ptr[i] = str[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**mem_alloc(char const *str, char c, char **n_str)
{
	size_t	i;
	size_t	j;
	int		ind;

	j = 0;
	i = 0;
	ind = -1;
	while (i <= ft_strlen(str))
	{
		if (str[i] != c && ind < 0)
			ind = i;
		else if ((str[i] == c || i == ft_strlen(str)) && ind >= 0)
		{
			n_str[j] = new_word(str, ind, i);
			j++;
			ind = -1;
		}
		i++;
	}
	n_str[j] = 0;
	return (n_str);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	ptr = malloc((nmr_str(s, c) + 1) * sizeof(char *));
	if (!ptr || !s)
		return (NULL);
	return (mem_alloc(s, c, ptr));
}
