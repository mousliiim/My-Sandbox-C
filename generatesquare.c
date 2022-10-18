/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generatesquare.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:58:41 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/18 03:54:41 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft/libft.h"

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
	if (ft_strnstr(argv[1], "--help", 6))
		printf("./a.out Height Weight\n");
	else if (argc == 3)
		square(atoi(argv[1]), atoi(argv[2]));
	else
		printf("Oops .. Il vous faut 2 argument !\n");
	return (0);
}
