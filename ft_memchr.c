/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levstrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 23:45:21 by levstrat          #+#    #+#             */
/*   Updated: 2019/03/11 23:55:07 by levstrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*sr;
	size_t		i;

	sr = (const char *)s;
	i = -1;
	while (++i < n)
		if (*(sr + i) == (char)c)
			return ((void *)sr + i);
	return (NULL);
}
