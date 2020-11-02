/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-co <jdiaz-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 08:53:21 by jdiaz-co          #+#    #+#             */
/*   Updated: 2019/11/09 07:52:56 by jdiaz-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *i;

	i = s;
	while (n-- > 0)
	{
		*i = 0;
		i++;
	}
}