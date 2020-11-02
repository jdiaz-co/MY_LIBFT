/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-co <jdiaz-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 08:35:06 by jdiaz-co          #+#    #+#             */
/*   Updated: 2019/11/23 08:44:47 by jdiaz-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_isspace_bonus(const char *str)
{
	if (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	size_t				i;
	unsigned long int	res;
	int					sign;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace_bonus(&str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res > 2147483647 && sign == 1)
			return (-1);
		if (res > 2147483648 && sign == -1)
			return (0);
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(res * sign));
}
