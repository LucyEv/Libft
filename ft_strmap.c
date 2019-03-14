/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levstrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 19:57:57 by levstrat          #+#    #+#             */
/*   Updated: 2019/03/13 21:08:39 by levstrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*elem;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	elem = ft_strnew(ft_strlen((char *)s));
	if (elem == NULL)
		return (NULL);
	while (s[i])
	{
		elem[i] = f(s[i]);
		i++;
	}
	return (elem);
}
