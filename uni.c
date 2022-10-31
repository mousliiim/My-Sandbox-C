/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uni.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:14:29 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/30 19:34:20 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				tab[256];
	int				i;

	if (argc == 3)
	{
		s1 = (unsigned char *)argv[1];
		s2 = (unsigned char *)argv[2];
		i = 0;
		while (i < 256)
		{
			tab[i] = 0;
			i++;
		}
		i = 0;
		while (s1[i])
		{
			if (tab[s1[i]] == 0)
			{
				ft_putchar(s1[i]);
				tab[s1[i]] = 1;
			}
			i++;
		}
		i = 0;
		while (s2[i])
		{
			if (tab[s2[i]] == 0)
			{
				ft_putchar(s2[i]);
				tab[s2[i]] = 1;
			}
			i++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
