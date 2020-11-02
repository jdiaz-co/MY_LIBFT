/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-co <jdiaz-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 16:20:42 by jdiaz-co          #+#    #+#             */
/*   Updated: 2019/11/25 08:52:30 by jdiaz-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*str;
	char	*dest;

	dest = (char *)s1;
	str = (char *)s2;
	if (s1 == s2)
		return (s1);
	if (s1 < s2)
		ft_memcpy(s1, s2, n);
	else
	{
		dest += n;
		str += n;
		while (n--)
			*(--dest) = *(--str);
	}
	return (s1);
}
