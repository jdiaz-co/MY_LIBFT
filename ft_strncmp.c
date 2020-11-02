/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-co <jdiaz-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 08:37:02 by jdiaz-co          #+#    #+#             */
/*   Updated: 2019/11/23 09:13:16 by jdiaz-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	int				i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (k < n))
	{
		if (s1[i] != s2[i])
		{
			return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
		}
		i++;
		k++;
	}
	return (0);
}
