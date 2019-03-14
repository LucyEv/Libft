/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levstrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 11:27:57 by levstrat          #+#    #+#             */
/*   Updated: 2019/03/07 01:40:20 by levstrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	if (!s1 || !s2
		|| !(res = ft_strnew(ft_strlen((char *)s1) + ft_strlen((char *)s2))))
		return (NULL);
	res = ft_strcat(res, s1);
	return (ft_strcat(res, s2));
}
