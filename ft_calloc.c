/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-co <jdiaz-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 16:28:11 by jdiaz-co          #+#    #+#             */
/*   Updated: 2019/11/19 16:32:42 by jdiaz-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t x, size_t n)
{
	char *mem;

	mem = malloc(x * n);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, x * n);
	return (mem);
}
