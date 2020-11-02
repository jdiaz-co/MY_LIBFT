/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-co <jdiaz-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:05:42 by jdiaz-co          #+#    #+#             */
/*   Updated: 2019/11/25 08:39:37 by jdiaz-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim(char c, char const *set)
{
	size_t i;

	i = 0;
	while (set[i])
	{
		if (c == set[i] || c == '\0')
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s, char const *set)
{
	char	*str;
	int		i;

	if (!s || !set)
		return (NULL);
	while (ft_trim(s[0], set) == 1)
	{
		if (*s == '\0')
			return (ft_strdup(""));
		s++;
	}
	i = ft_strlen(s) - 1;
	while (ft_trim(s[i], set) == 1)
		i--;
	i++;
	if (!(str = (char *)ft_calloc(sizeof(char), i + 1)))
		return (NULL);
	ft_strlcpy(str, s, i + 1);
	str[i] = '\0';
	return (str);
}
