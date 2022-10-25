/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:59:19 by diomarti          #+#    #+#             */
/*   Updated: 2022/10/25 16:59:18 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		s_len;
	char	*str;
	int		i;

	s_len = ft_strlen(s);
	str = malloc(s_len * 2 + 1);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	i = 0;
	while (s[i] != '\0')
	{
		str[i + s_len] = s[i];
		i++;
	}
	str[i + s_len] = '\0';
	return (str);
}
