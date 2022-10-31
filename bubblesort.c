/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 04:03:55 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/23 02:10:40 by mmourdal         ###   ########.fr       */
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
	while (i < 10)
	{
		j = 0;
		while (j < 10)
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
	int	array[11];
	int	i;
	int length;

	array[0] = 42;
	array[1] = 59;
	array[2] = 119;
	array[3] = 89;
	array[4] = 65;
	array[5] = 394;
	array[6] = 2;
	array[7] = 4;
	array[8] = 6;
	array[9] = 7;
	array[10] = 10;
	length = sizeof(array)/sizeof(array[0]);
	i = 0;
	printf("Without BubbleSort: \n");
	while (i < length)
	{
		printf("%d ", array[i]);
		i++;
	}
	ft_bubble_sort(array);
	printf("\n\nNumber of element in array = \"%d\"\n", length);
	printf("\nWith BubbleSort: \n");
	i = 0;
	while (i < length)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}
