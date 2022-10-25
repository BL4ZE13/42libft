/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:45:12 by diomarti          #+#    #+#             */
/*   Updated: 2022/10/25 17:01:38 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	str1 = dest;
	str2 = src;
	i = 0;
	while (n > 0)
	{
		str1[i] = str2[i];
		i++;
		n--;
	}
}
