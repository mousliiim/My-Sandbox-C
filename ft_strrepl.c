/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrepl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:06:21 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/31 02:42:58 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

/*
 * Exercice ou j'ai bloqué a l'exam final a 42 :/
 * Exercice tout simple mais je n'est pas retournée la chaine de caractére 
 * modifié mais seulement écris 🤦 erreur à ne surtout pas faire.
*/

char	*ft_strrepl(char *str, char k1, char k2)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == k1)
			str[i] = k2;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	test[17] = "O--@@popoche@@--O";

	printf("Above ft : %s\n", test);
	printf("Return : %s\n", ft_strrepl(test, 'o', 'a'));
	printf("After ft : %s\n", test);
}
