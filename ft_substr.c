/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-co <jdiaz-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 10:11:43 by jdiaz-co          #+#    #+#             */
/*   Updated: 2019/11/19 17:10:03 by jdiaz-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start || len == 1)
		return (ft_strdup(""));
	s2 = malloc(len + 1);
	if (s2 == NULL)
		return (NULL);
	while (s[start] != '\0' && len > 0)
	{
		s2[i] = (char)s[start];
		i++;
		start++;
		len--;
	}
	s2[i] = '\0';
	return (s2);
}
