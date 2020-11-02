/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-co <jdiaz-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:14:20 by jdiaz-co          #+#    #+#             */
/*   Updated: 2019/11/25 08:56:26 by jdiaz-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	if (ft_strchr(str, c) == NULL)
		return (NULL);
	while (*str != '\0')
		str++;
	while (*str != c)
		str--;
	return ((char *)str);
}
