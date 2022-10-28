/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:45:20 by diomarti          #+#    #+#             */
/*   Updated: 2022/10/28 14:56:53 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*strtemp;
	char	*d;

	strtemp = (char *)src;
	d = (char *)dest;
	if (strtemp < d)
	{
		while (n--)
		{
			d[n] = strtemp[n];
		}
	}
	else
		ft_memcpy(d, strtemp, n);
	return (dest);
}
