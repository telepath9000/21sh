/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 14:27:51 by wdebs             #+#    #+#             */
/*   Updated: 2016/10/01 01:03:56 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char const *s)
{
	int				i;
	unsigned char	a;

	if (s != NULL && s != 0)
	{
		i = 0;
		while (s[i] != '\0')
		{
			a = s[i];
			write(1, &a, 1);
			i++;
		}
	}
}