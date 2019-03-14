/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levstrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 22:52:56 by levstrat          #+#    #+#             */
/*   Updated: 2019/03/13 19:15:03 by levstrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l;
	size_t	m;

	if (*little == '\0')
		return ((char *)big);
	l = 0;
	while (big[l] && l < len)
	{
		m = 0;
		while (little[m] != '\0' && little[m] == big[l + m] && l + m <= len)
			m++;
		if (little[m] == '\0')
			return ((char *)big + l);
		l++;
	}
	return (NULL);
}
