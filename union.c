/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 00:33:54 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/18 01:00:28 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	init_tab_ext_ascii(int *tab, int i)
{
	while (i++ < 256)
		tab[i] = 0;
}

void	s1_fill(int *tab, int i, unsigned char *s1)
{	
	while (s1[i])
	{
		if (tab[s1[i]] == 0)
		{
			ft_putchar(s1[i]);
			tab[s1[i]] = 1;
		}
		i++;
	}
}

void	s2_fill(int *tab, int i, unsigned char *s2)
{
	while (s2[i])
	{
		if (tab[s2[i]] == 0)
		{
			ft_putchar(s2[i]);
			tab[s2[i]] = 1;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int				tab[256];
	int				i;
	unsigned char	*s1;
	unsigned char	*s2;

	if (argc == 3)
	{
		s1 = (unsigned char *)argv[1];
		s2 = (unsigned char *)argv[2];
		i = 0;
		init_tab_ext_ascii(tab, i);
		i = 0;
		s1_fill(tab, i, s1);
		i = 0;
		s2_fill(tab, i, s2);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}
