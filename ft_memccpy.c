/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-co <jdiaz-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 16:05:36 by jdiaz-co          #+#    #+#             */
/*   Updated: 2019/11/23 09:09:41 by jdiaz-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *des, const void *src, int c, size_t n)
{
	unsigned char		*s1;
	unsigned char		*s2;
	size_t				i;

	i = 0;
	s1 = (unsigned char *)des;
	s2 = (unsigned char *)src;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL || s2 == NULL)
		des--;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s1[i] == (unsigned char)c)
			return ((void *)&s1[i + 1]);
		i++;
	}
	return (NULL);
}
