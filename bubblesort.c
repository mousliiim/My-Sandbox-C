/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 04:03:55 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/18 05:06:34 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_bubble_sort(int arr[])
{
	int	i;
	int	j;

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			if (arr[j] > arr[j + 1])
			{
				ft_swap(&arr[j], &arr[j + 1]);
			}
			j++;
		}
	i++;
	}
}

int	main(void)
{
	int	array[5];
	int	i;

	array[0] = 42;
	array[1] = 59;
	array[2] = 119;
	array[3] = 89;
	array[4] = 65;
	ft_bubble_sort(array);
	i = 0;
	while (i < 5)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}
