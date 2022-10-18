/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generatesquare.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:58:41 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/18 05:54:56 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	square(int size_x, int size_y)
{
	int	x;
	int	y;

	y = 0;
	while (y < size_y)
	{
		y++;
		x = 0;
		while (x < size_x)
		{
			x++;
			if ((x == 1 || x == size_x) || (y == 1 || y == size_y))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		square(atoi(argv[1]), atoi(argv[2]));
	else if (argc == 2)
	{
		if (ft_strnstr(argv[1], "--help", 6))
			printf("\nUtilisation : ./a.out (Largeur) (Hauteur)\n\n");
		else
			printf("\nOops .. Il manque encore 1 argument !\n\n");
	}
	else if (argc > 3)
		printf("\nOops .. Il y'a trop d'argument il en suffit de 2 !\n\n");
	else
		printf("\nOops .. Il vous faut 2 arguments !\n\n");
}
