/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levstrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 22:56:28 by levstrat          #+#    #+#             */
/*   Updated: 2019/03/06 23:40:40 by levstrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strfill(char **arr, const char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			*arr++ = ft_strqdupc(&s, c);
		s++;
	}
	*arr = NULL;
}