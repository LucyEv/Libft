/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levstrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:29:41 by levstrat          #+#    #+#             */
/*   Updated: 2019/03/07 01:00:56 by levstrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ar1;
	unsigned char *ar2;

	ar1 = (unsigned char *)s1;
	ar2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ar1 != *ar2)
			return (*ar1 - *ar2);
		ar1++;
		ar2++;
	}
	return (0);
}
