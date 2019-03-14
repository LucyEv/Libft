/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strqdupc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levstrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 23:52:52 by levstrat          #+#    #+#             */
/*   Updated: 2019/03/07 01:27:38 by levstrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strqdupc(const char **s1, char c)
{
	char	*str;

	str = ft_stralloc(*s1);
	if (str)
		*s1 = ft_stpcpyc(str, *s1, c);
	return (str);
}
