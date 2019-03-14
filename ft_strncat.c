/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levstrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 19:12:22 by levstrat          #+#    #+#             */
/*   Updated: 2019/03/04 22:46:32 by levstrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	int		i;
	size_t	l;

	i = 0;
	while (dst[i] != '\0')
		i++;
	l = 0;
	while (src[l] != '\0' && l < n)
	{
		dst[i] = src[l];
		i++;
		l++;
	}
	dst[i] = '\0';
	return (dst);
}
