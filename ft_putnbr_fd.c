/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-co <jdiaz-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 07:19:11 by jdiaz-co          #+#    #+#             */
/*   Updated: 2019/11/16 07:25:21 by jdiaz-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	unsigned int nb2;

	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nb2 = (unsigned int)(nbr * -1);
	}
	else
	{
		nb2 = (unsigned int)nbr;
	}
	if (nb2 >= 10)
	{
		ft_putnbr_fd(nb2 / 10, fd);
	}
	ft_putchar_fd((char)(nb2 % 10 + 48), fd);
}
