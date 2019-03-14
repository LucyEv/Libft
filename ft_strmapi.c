/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levstrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 20:19:45 by levstrat          #+#    #+#             */
/*   Updated: 2019/03/13 21:08:53 by levstrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		elem[i] = f(i, s[i]);
		i++;
	}
	return (elem);
}
