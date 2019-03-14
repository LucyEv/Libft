/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levstrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 11:12:10 by levstrat          #+#    #+#             */
/*   Updated: 2019/03/13 21:07:13 by levstrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (len + 1));
	if (str)
	{
		while (start--)
			s++;
		ft_strncpy(str, s, len);
		str[len] = '\0';
	}
	return (str);
}
