/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-co <jdiaz-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 09:32:43 by jdiaz-co          #+#    #+#             */
/*   Updated: 2019/11/12 11:38:33 by jdiaz-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *dest2;
	char *src2;

	src2 = (char *)src;
	dest2 = (char *)dest;
	if (n == 0 || dest == src)
		return (dest);
	while (n)
	{
		*(dest2++) = *(src2++);
		--n;
	}
	return (dest);
}
