/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 03:27:34 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/18 05:27:44 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] && s2[i]) && s1[i] == s2[i] && i < (n - 1))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;

	if (*little == 0 || big == little)
	{
		return ((char *)big);
	}
	if (len == 0)
	{
		return ((char *)big);
	}
	len_little = ft_strlen(little);
	while (*big && len_little <= len--)
	{
		if (!(ft_strncmp((char *)big, (char *)little, len_little)))
		{
			return ((char *)big);
		}
		big++;
	}
	return (NULL);
}
