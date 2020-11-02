/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-co <jdiaz-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 09:11:42 by jdiaz-co          #+#    #+#             */
/*   Updated: 2019/11/14 09:13:41 by jdiaz-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;
	char		*a;
	char		*b;

	i = 0;
	a = (char*)s1;
	b = (char*)s2;
	if (b[0] == '\0')
		return (a);
	while (a[i] != '\0' && i < n)
	{
		j = 0;
		while (a[i + j] != '\0' && i + j < n && a[i + j] == b[j])
		{
			if (b[j + 1] == '\0')
				return (&a[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
