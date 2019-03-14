/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_bwd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levstrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 23:36:31 by levstrat          #+#    #+#             */
/*   Updated: 2019/03/11 23:41:41 by levstrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy_bwd(void *dst, const void *src, size_t n)
{
	char	*d1;
	char	*d2;

	if (n == 0 || dst == src)
		return (dst);
	d1 = (char *)dst;
	d2 = (char *)src;
	while (n--)
	{
		d1[n] = d2[n];
	}
	return (dst);
}
