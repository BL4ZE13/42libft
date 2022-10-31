/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:45:12 by diomarti          #+#    #+#             */
/*   Updated: 2022/10/31 13:50:07 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d_temp;
	unsigned char	*s_temp;
	size_t			i;

	i = -1;
	d_temp = (unsigned char *)dest;
	s_temp = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (++i < n)
		d_temp[i] = s_temp[i];
	return (dest);
}
