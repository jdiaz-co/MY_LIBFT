/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-co <jdiaz-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 16:35:00 by jdiaz-co          #+#    #+#             */
/*   Updated: 2019/11/23 10:45:35 by jdiaz-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int contador;

	contador = 0;
	while (src[contador] != '\0')
	{
		dest[contador] = src[contador];
		contador++;
	}
	dest[contador] = src[contador];
	return (dest);
}

char		*ft_strdup(const char *s)
{
	char *d;

	d = malloc(ft_strlen(s) + 1);
	if (d == NULL)
		return (NULL);
	ft_strcpy(d, s);
	return (d);
}
