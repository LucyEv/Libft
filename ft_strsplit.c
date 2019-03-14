/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levstrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 21:02:33 by levstrat          #+#    #+#             */
/*   Updated: 2019/03/13 21:24:23 by levstrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*create_string(char *s, int *i, char c)
{
	int		j;
	char	*newstr;

	j = 0;
	newstr = (char *)malloc(sizeof(char) * ft_strsize((char *)&s[*i], c) + 1);
	while (s[*i] != c && s[*i] != '\0')
	{
		newstr[j] = s[*i];
		j++;
		(*i)++;
	}
	newstr[j] = '\0';
	return (newstr);
}

char		**ft_strsplit(char const *s, char c)
{
	int		words;
	int		i;
	int		j;
	int		x;
	char	**newarr;

	if (!s)
		return (NULL);
	x = 0;
	i = 0;
	j = 0;
	words = ft_strcount((char *)s, c);
	if (!(newarr = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i])
			newarr[x++] = create_string((char *)s, &i, c);
	}
	newarr[x] = NULL;
	return (newarr);
}
