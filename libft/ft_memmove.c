/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:45:20 by diomarti          #+#    #+#             */
/*   Updated: 2022/10/25 11:18:37 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*strtemp;
	char	*str1;
	char	*str2;

	*str1 = dest;
	*str2 = src;
	while (n > 0)
	{
		strtemp = str2;
		strtemp++;
		n--;
	}
	while (strtemp != '\0')
	{
		str1 = strtemp;
		str1++;
	}
}
